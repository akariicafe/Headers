@interface AppNounResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAppNounToConfirm:(long long)a0;
+ (id)successWithResolvedAppNoun:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
