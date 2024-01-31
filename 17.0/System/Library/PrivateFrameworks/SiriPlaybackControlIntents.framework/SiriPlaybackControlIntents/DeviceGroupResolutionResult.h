@interface DeviceGroupResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedDeviceGroup:(id)a0;
+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)a0;
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
