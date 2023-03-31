package com.unity3d.player.manager;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.PreferenceManager;
import android.util.Log;

import com.fasterxml.jackson.databind.ObjectMapper;

import java.io.File;
import java.io.IOException;
import java.util.Map;

public class SharedConfigManager {

    private static final String CONFIG_FILE_NAME = "shared_preference.json";

    private static final ObjectMapper OBJECT_MAPPER = new ObjectMapper();

    public static void updateConfiguration(Context context) throws IOException {
        SharedPreferences sharedPreferences = PreferenceManager.getDefaultSharedPreferences(context);
        Map<String, ?> preferencesMap = sharedPreferences.getAll();
        File file = getConfigFile(context);
        OBJECT_MAPPER.writeValue(file, preferencesMap);
        Log.d("info", "write config success! " + file.getAbsolutePath().toString());
        Log.d("info", "config content: " + OBJECT_MAPPER.writeValueAsString(preferencesMap));
    }

    public static File getConfigFile(Context context) {
        File appSpecificInternalStorageDirectory = context.getFilesDir();
        File file = new File(appSpecificInternalStorageDirectory, CONFIG_FILE_NAME);
        return file;
    }
}