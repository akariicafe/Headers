@interface SiriDeviceResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSiriDeviceToConfirm:(id)a0;
+ (id)disambiguationWithSiriDevicesToDisambiguate:(id)a0;
+ (id)successWithResolvedSiriDevice:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
