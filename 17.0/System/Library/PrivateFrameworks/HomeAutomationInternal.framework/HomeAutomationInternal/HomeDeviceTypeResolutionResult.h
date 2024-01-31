@interface HomeDeviceTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithHomeDeviceTypeToConfirm:(long long)a0;
+ (id)successWithResolvedHomeDeviceType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
