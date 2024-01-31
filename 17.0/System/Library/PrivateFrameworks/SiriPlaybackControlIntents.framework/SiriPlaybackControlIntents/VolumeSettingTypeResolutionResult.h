@interface VolumeSettingTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithVolumeSettingTypeToConfirm:(long long)a0;
+ (id)successWithResolvedVolumeSettingType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
