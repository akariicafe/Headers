@interface IMTipKitEventReporter : NSObject

+ (id)sharedInstance;

- (void)sendFilterUnknownSenderStateChangedEvent;
- (void)sendJunkInboxOpenedEvent;
- (void)sendSavePhotoEvent;
- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendBiomeSignal:(id)a0;
- (void)sendCoreAnalyticsSilverEvent:(id)a0;
- (void)sendINSendMessageIntentEvent;
- (void)sendReceivedJunkEventIfNeeded;
- (void)sendReceivedPhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendTapbackSendEvent;

@end
