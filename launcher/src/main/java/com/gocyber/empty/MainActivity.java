package com.gocyber.empty;

import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.unity3d.player.UnityPlayerActivity;
import com.unity3d.player.data.Character;
import com.unity3d.player.manager.CharacterListManager;

import java.io.IOException;
import java.util.List;

public class MainActivity extends AppCompatActivity implements View.OnClickListener, CharacterAdapter.OnItemClickListener {

    private String TAG = "aivatar_launcher";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // Initialize the RecyclerView and set its layout manager
        RecyclerView recyclerView = findViewById(R.id.recycler_view);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        try {
            // Initialize the adapter and set it to the RecyclerView
            List<Character> characters = CharacterListManager.getInstance().getCharacters(this);
            CharacterAdapter myAdapter = new CharacterAdapter(characters);
            recyclerView.setAdapter(myAdapter);
            // Set the OnItemClickListener for the adapter
            myAdapter.setOnItemClickListener(this);


            Button changeButton = findViewById(R.id.changeBtn);
            changeButton.setOnClickListener(this);

            Button unityButton = findViewById(R.id.unityBtn);
            unityButton.setOnClickListener(this);

            Button addButton = findViewById(R.id.addBtn);
            addButton.setOnClickListener(this);

            Button restoreButton = findViewById(R.id.restoreBtn);
            restoreButton.setOnClickListener(this);

        } catch (RuntimeException e) {
            Log.d(TAG, "onCreate: failed to init.");
        } catch (IOException e) {
            Log.d(TAG, "onCreate: failed to init.");
        }
    }

    @Override
    public void onClick(View view) {
        switch (view.getId()) {

            case R.id.changeBtn:
                Log.d(TAG, "goto setting page");
                Intent intentSetting = new Intent(this, SettingsActivity.class);
                startActivity(intentSetting);
                break;
            case R.id.unityBtn:
                Log.d(TAG, "start Unity");
                SharedPreferences sharedPreferences = PreferenceManager.getDefaultSharedPreferences(this);
                SharedPreferences.Editor editor = sharedPreferences.edit();
                if (sharedPreferences.getString("currentAvatarModel", "").equals(""))
                {
                    try {
                        Character character = CharacterListManager.getInstance().getCharacters(this).get(0);
                        editor.putString("currentAvatarModel", character.getAvatarModel());
                        editor.putString("backstory", character.getBackstory());
                        editor.putString("backgroundImageUrl", character.getBackgroundImageUrl());
                        editor.apply();

                    } catch (IOException e) {
                        Log.d(TAG, "failed to get characters");
                    }
                }
                Intent intent = new Intent(this, UnityPlayerActivity.class);
                startActivity(intent);
                break;
            case R.id.addBtn:
                Log.d(TAG, "add a new Character");
                Intent intentAdd = new Intent(this, CharacterActivity.class);
                startActivity(intentAdd);
                break;
            case R.id.restoreBtn:
                Log.d(TAG, "restore to default characters");
                try {
                    CharacterListManager.getInstance().restoreDefaultCharacters(this);
                } catch (IOException e) {
                    Log.d(TAG, "failed to restore default characters");
                }
                break;
        }
    }
    @Override
    public void onItemClick(int position) {
        // Handle the item click here
        Character clickedItem = null;
        try {
            if (position < CharacterListManager.getInstance().getCharacters(this).size()) {
                clickedItem = CharacterListManager.getInstance().getCharacters(this).get(position);
                Toast.makeText(this, "change model to: " + clickedItem.getName(), Toast.LENGTH_SHORT).show();
                SharedPreferences sharedPreferences = PreferenceManager.getDefaultSharedPreferences(this);
                SharedPreferences.Editor editor = sharedPreferences.edit();
                editor.putString("currentAvatarModel", clickedItem.getAvatarModel());
                editor.putString("backstory", clickedItem.getBackstory());
                editor.putString("backgroundImageUrl", clickedItem.getBackgroundImageUrl());
                editor.apply();
            } else {
                Toast.makeText(this, "this model does not exist!", Toast.LENGTH_SHORT).show();
            }
        } catch (IOException e) {
            Log.d(TAG, "onItemClick: failed to read character");
        }
    }
}