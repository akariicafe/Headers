@interface AVTUsageTracker : NSObject

+ (id)currentSession;
+ (void)trackCountOfMemojiInStore:(id)a0;
+ (void)trackCountOfMemojiInStore:(id)a0 withCoreAnalyticsClient:(id)a1;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)a0 withCoreAnalyticsClient:(id)a1;

@end
