@interface VolumeSettingQualifierResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithVolumeSettingQualifierToConfirm:(long long)a0;
+ (id)successWithResolvedVolumeSettingQualifier:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
