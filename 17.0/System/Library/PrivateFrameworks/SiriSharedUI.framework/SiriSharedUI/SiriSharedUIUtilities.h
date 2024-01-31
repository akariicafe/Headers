@interface SiriSharedUIUtilities : NSObject

+ (id)_emojisToNotInclude;
+ (BOOL)emojiIsValid:(struct __EmojiTokenWrapper { } *)a0;
+ (id)substringRangesContainingEmojiInString:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0;
+ (BOOL)applicationBundleIdentifierIsThirdParty:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0 isAttending:(BOOL)a1;

@end
