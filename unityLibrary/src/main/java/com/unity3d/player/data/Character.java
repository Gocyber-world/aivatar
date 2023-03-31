package com.unity3d.player.data;

import com.fasterxml.jackson.annotation.JsonIgnoreProperties;

@JsonIgnoreProperties(ignoreUnknown = true)
public class Character {
    private String name;
    private String avatarModel;

    private String backstory;

    private String backgroundImageUrl;

    public String getBackstory() {
        return backstory;
    }

    public void setBackstory(String backstory) {
        this.backstory = backstory;
    }

    public String getBackgroundImageUrl() {
        return backgroundImageUrl;
    }

    public void setBackgroundImageUrl(String backgroundImageUrl) {
        this.backgroundImageUrl = backgroundImageUrl;
    }

    public Character(String name, String avatarModel, String backstory, String backgroundImageUrl) {
        this.name = name;
        this.avatarModel = avatarModel;
        this.backstory = backstory;
        this.backgroundImageUrl = backgroundImageUrl;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAvatarModel() {
        return avatarModel;
    }

    public void setAvatarModel(String avatarModel) {
        this.avatarModel = avatarModel;
    }
}
