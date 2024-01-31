@interface SiriTargetMatchTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSiriTargetMatchTypeToConfirm:(long long)a0;
+ (id)successWithResolvedSiriTargetMatchType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
