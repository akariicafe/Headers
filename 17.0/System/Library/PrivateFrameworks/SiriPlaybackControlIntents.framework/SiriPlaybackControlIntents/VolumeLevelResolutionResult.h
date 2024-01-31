@interface VolumeLevelResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedVolumeLevel:(id)a0;
+ (id)confirmationRequiredWithVolumeLevelToConfirm:(id)a0;
+ (id)disambiguationWithVolumeLevelsToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
