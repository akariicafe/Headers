@interface INAlarmResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAlarmToConfirm:(id)a0;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)a0;
+ (id)successWithResolvedAlarm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
