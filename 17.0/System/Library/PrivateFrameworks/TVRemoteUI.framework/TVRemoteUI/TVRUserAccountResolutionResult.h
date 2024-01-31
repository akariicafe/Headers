@interface TVRUserAccountResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)successWithResolvedUserAccount:(id)a0;
+ (id)confirmationRequiredWithUserAccountToConfirm:(id)a0;
+ (id)disambiguationWithUserAccountsToDisambiguate:(id)a0;

@end
