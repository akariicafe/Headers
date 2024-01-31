@interface ActionParameterResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithActionParameterToConfirm:(id)a0;
+ (id)disambiguationWithActionParametersToDisambiguate:(id)a0;
+ (id)successWithResolvedActionParameter:(id)a0;

@end
