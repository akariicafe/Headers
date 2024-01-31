@interface AVTConfigurationPreset : NSObject

@property (readonly, nonatomic) struct { long long destination; long long category; } settingKind;
@property (readonly, nonatomic) id preset;
@property (readonly, nonatomic, getter=isDefaultPreset) BOOL defaultPreset;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaultPresetForSettingKind:(struct { long long x0; long long x1; })a0;
- (id)initWithPreset:(id)a0 settingKind:(struct { long long x0; long long x1; })a1;

@end
