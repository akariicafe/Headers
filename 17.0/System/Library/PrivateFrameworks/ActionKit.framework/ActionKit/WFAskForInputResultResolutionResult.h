@interface WFAskForInputResultResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithAskForInputResultToConfirm:(id)a0;
+ (id)disambiguationWithAskForInputResultsToDisambiguate:(id)a0;
+ (id)successWithResolvedAskForInputResult:(id)a0;

@end
