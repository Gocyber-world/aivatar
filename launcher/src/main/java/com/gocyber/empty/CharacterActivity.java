package com.gocyber.empty;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import com.unity3d.player.data.Character;
import com.unity3d.player.manager.CharacterListManager;

import java.io.IOException;

public class CharacterActivity extends AppCompatActivity {

    private EditText nameEditText;
    private EditText avatarModelUrlEditText;

    private EditText backstoryText;

    private EditText backgroundImageUrlEditText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_character);

        // Find the button by its ID
        Button myButton = findViewById(R.id.save_button);
        nameEditText = findViewById(R.id.name_edittext);
        avatarModelUrlEditText = findViewById(R.id.avatar_model_url_edittext);
        backstoryText = findViewById(R.id.description_edittext);
        backgroundImageUrlEditText = findViewById(R.id.background_image_url_edittext);

        // Set the OnClickListener for the button
        myButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                // Perform an action when the button is clicked
                onButtonClick();
            }
        });
    }

    // Define a method to handle the button click event
    private void onButtonClick() {
        Character character = new Character(nameEditText.getText().toString(),
                avatarModelUrlEditText.getText().toString(), backstoryText.getText().toString(),
                backgroundImageUrlEditText.getText().toString());
        try {
            CharacterListManager.getInstance().appendCharacter(character, this);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        // If the back button is pressed, finish the activity to return to the previous activity
        Intent intent = new Intent(this, MainActivity.class);
        startActivity(intent);
        finish();
    }

}