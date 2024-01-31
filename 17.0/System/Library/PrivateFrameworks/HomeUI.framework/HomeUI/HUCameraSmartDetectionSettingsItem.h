@class NSSet, HFCameraSignificantEventConfiguration;

@interface HUCameraSmartDetectionSettingsItem : HFItem

@property (readonly, copy, nonatomic) HFCameraSignificantEventConfiguration *significantEventConfiguration;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) unsigned long long settingsContext;

- (void).cxx_destruct;
- (BOOL)_isHiddenForCurrentsignificantEventConfiguration:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSignificantEventConfiguration:(id)a0 cameraProfiles:(id)a1 settingsContext:(unsigned long long)a2;

@end
