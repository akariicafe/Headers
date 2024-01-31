@interface SiriAlarmResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSiriAlarmToConfirm:(id)a0;
+ (id)disambiguationWithSiriAlarmsToDisambiguate:(id)a0;
+ (id)successWithResolvedSiriAlarm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
