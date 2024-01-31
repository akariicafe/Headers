@interface SiriTimerTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSiriTimerTypeToConfirm:(long long)a0;
+ (id)successWithResolvedSiriTimerType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
