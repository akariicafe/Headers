@interface SiriTimerStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSiriTimerStateToConfirm:(long long)a0;
+ (id)successWithResolvedSiriTimerState:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
