@interface RCIntentLogger : NSObject

+ (void)deleteInteractionsWithUUID:(id)a0;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)a0;
+ (id)interactionForPlaybackVoiceMemo;
+ (void)_donateInteraction:(id)a0;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)a0;
+ (void)deleteInteractionsWithUUIDs:(id)a0;
+ (id)interactionForRecordVoiceMemo;

@end
