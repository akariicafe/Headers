@interface SignedDurationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSignedDurationToConfirm:(id)a0;
+ (id)disambiguationWithSignedDurationsToDisambiguate:(id)a0;
+ (id)successWithResolvedSignedDuration:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
