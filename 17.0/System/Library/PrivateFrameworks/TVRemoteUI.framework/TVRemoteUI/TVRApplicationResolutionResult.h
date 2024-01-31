@interface TVRApplicationResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)successWithResolvedApplication:(id)a0;
+ (id)confirmationRequiredWithApplicationToConfirm:(id)a0;
+ (id)disambiguationWithApplicationsToDisambiguate:(id)a0;

@end
