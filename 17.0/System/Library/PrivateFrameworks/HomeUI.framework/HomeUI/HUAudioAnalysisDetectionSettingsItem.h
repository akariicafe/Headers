@class HMAccessory;

@interface HUAudioAnalysisDetectionSettingsItem : HFItem

@property (readonly, nonatomic) unsigned long long audioDetectionType;
@property (readonly, nonatomic) HMAccessory *accessory;

- (void).cxx_destruct;
- (id)_localizedStringFromDetectionType:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithDetectionType:(unsigned long long)a0 accessory:(id)a1;

@end
