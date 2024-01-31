@interface InAppVerbResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithInAppVerbToConfirm:(long long)a0;
+ (id)successWithResolvedInAppVerb:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
