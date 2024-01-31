@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;

- (void)createConnectionIfNecessary;
- (void)_disconnect;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMachName:(id)a0;
- (id)_initWithoutConnection;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (void)writeEmojiDefaults;
- (void)didUseEmoji:(id)a0;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;

@end
