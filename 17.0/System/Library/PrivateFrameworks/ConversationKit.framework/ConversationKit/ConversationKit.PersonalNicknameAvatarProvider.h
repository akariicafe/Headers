@interface ConversationKit.PersonalNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {
    void /* unknown type, empty encoding */ imageData;
    void /* unknown type, empty encoding */ wallpaperFilePath;
    void /* unknown type, empty encoding */ nameString;
}

- (void)generateAvatarImageOfSize:(struct CGSize { double x0; double x1; })a0 imageHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
