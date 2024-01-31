@class EMFEmojiPreferencesClient, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UIKeyboardEmojiPreferences : NSObject {
    EMFEmojiPreferencesClient *_preferencesClient;
    NSObject<OS_dispatch_queue> *_clientDispatchQueue;
    NSArray *_localRecentsWithClient;
    NSArray *_localRecentsWithoutClient;
    BOOL _deviceWasLockedWhenKeyboardWasShown;
}

@property (readonly, nonatomic) EMFEmojiPreferencesClient *preferencesClient;
@property (nonatomic) BOOL hasCheckedMemojiPreference;
@property (nonatomic) BOOL supportsMemoji;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
@property (nonatomic) long long selectedCategoryType;
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)preferencesControllerChanged:(id)a0;
- (void).cxx_destruct;
- (void)_updateCachedDeviceLockState;
- (void)_usageForEmoji:(id)a0 language:(id)a1 mode:(id)a2 typingName:(id)a3;
- (void)clearEmojiKeyboardPreferenceClient;
- (void)clearLocalRecentsCache;
- (BOOL)deviceSupportsMemoji;
- (void)didDisplaySkinToneHelp;
- (long long)emojiCategoryDefaultsIndex:(id)a0;
- (void)emojiPredicted:(id)a0 typingName:(id)a1 language:(id)a2;
- (void)emojiUsed:(id)a0;
- (void)emojiUsed:(id)a0 language:(id)a1;
- (void)emojiUsed:(id)a0 language:(id)a1 completion:(id /* block */)a2;
- (id)emojiWithoutDuplicateRecents:(id)a0;
- (void)handleBackground:(id)a0;
- (void)handleRead:(id)a0;
- (void)handleSuspend:(id)a0;
- (void)handleWrite:(id)a0;
- (BOOL)hasLastUsedVariantForEmojiString:(id)a0;
- (id)lastUsedVariantEmojiForEmojiString:(id)a0;
- (BOOL)memojiSettingEnabled;
- (void)readEmojiDefaults;
- (id)recentEmojiAtIndex:(long long)a0 size:(unsigned long long *)a1;
- (void)refreshLocalRecents;
- (void)setEmojiCategoryDefaultsIndex:(long long)a0 forCategory:(id)a1;
- (BOOL)shouldShowRecents;
- (id)typingNameForEmoji:(id)a0 language:(id)a1;
- (void)updateSkinToneBaseKey:(id)a0 variantUsed:(id)a1;
- (void)writeEmojiDefaults;

@end
