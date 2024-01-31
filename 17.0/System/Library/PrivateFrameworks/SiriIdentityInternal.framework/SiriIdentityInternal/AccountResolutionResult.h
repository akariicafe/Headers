@interface AccountResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithAccountToConfirm:(id)a0;
+ (id)disambiguationWithAccountsToDisambiguate:(id)a0;
+ (id)successWithResolvedAccount:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
