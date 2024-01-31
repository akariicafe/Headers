@interface SharedLocationVisibilityResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSharedLocationVisibilityToConfirm:(long long)a0;
+ (id)successWithResolvedSharedLocationVisibility:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
