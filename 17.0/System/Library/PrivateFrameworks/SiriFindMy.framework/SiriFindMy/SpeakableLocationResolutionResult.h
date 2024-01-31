@interface SpeakableLocationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSpeakableLocationToConfirm:(id)a0;
+ (id)disambiguationWithSpeakableLocationsToDisambiguate:(id)a0;
+ (id)successWithResolvedSpeakableLocation:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
