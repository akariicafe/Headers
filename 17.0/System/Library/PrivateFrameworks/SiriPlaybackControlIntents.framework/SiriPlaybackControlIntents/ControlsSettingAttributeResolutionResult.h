@interface ControlsSettingAttributeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithControlsSettingAttributeToConfirm:(id)a0;
+ (id)disambiguationWithControlsSettingAttributesToDisambiguate:(id)a0;
+ (id)successWithResolvedControlsSettingAttribute:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
