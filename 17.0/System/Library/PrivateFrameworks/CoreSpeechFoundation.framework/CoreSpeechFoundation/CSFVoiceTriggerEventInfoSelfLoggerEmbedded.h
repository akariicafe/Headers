@interface CSFVoiceTriggerEventInfoSelfLoggerEmbedded : CSFVoiceTriggerEventInfoSelfLogger

+ (int)_convertToFirstPassSource:(id)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (void)_emitTwoShotClientEventWithTwoShotTransitionContext:(id)a0 withMHUUID:(id)a1;
+ (int)_convertJarvisTriggerModeString:(id)a0;
+ (int)_convertPowerState:(unsigned int)a0;
+ (id)_convertToFirstPassChannelSelectionScores:(id)a0;
+ (int)_convertToMatchResult:(unsigned int)a0;
+ (int)_convertToSELFRejectedReason:(unsigned long long)a0;
+ (id)_convertToSELFVTEI:(id)a0;
+ (int)_convertToTwoShotPromptType:(long long)a0;
+ (void)_emitVTClientEventWithVTContext:(id)a0 withMHUUID:(id)a1;
+ (id)_getStartedMessageWithFirstPassInfo:(id)a0;

- (id)init;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)a0;
- (void)logCancelledEventWithMHUUID:(id)a0;
- (void)logRejectEventWithVTEI:(id)a0 withMHUUID:(id)a1 withSecondPassResult:(unsigned long long)a2;
- (void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)a0;
- (void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)a0;
- (void)logStartEventWithFirstPassStartedInfo:(id)a0 withMHUUID:(id)a1;
- (void)logTriggerEventWithVTEI:(id)a0 withMHUUID:(id)a1;
- (void)logTwoShotDetectedWithMHUUID:(id)a0;
- (void)logTwoShotEndEventWithSuppresedAlert:(BOOL)a0 withTimedOut:(BOOL)a1 withMHUUID:(id)a2;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)a0 withMHUUID:(id)a1;

@end
