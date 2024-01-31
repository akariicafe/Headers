@class HMCameraUserSettings, HUServiceDetailsCameraSettingsReaderWriter;

@interface HUServiceDetailsCameraAllowSnapshotsItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>

@property (retain, nonatomic) HMCameraUserSettings *cameraUserSettings;
@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;
@property (nonatomic) BOOL shouldBeHidden;

- (void).cxx_destruct;
- (id)itemTitle;
- (id)transactionReason;
- (BOOL)_canReadWriteHMCameraSnapshotsControl;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)cameraSettings;
- (id)characteristicForSettings:(id)a0;
- (id)characteristicValueManager;
- (id)initWithSourceServiceItem:(id)a0 home:(id)a1 shouldBeHidden:(BOOL)a2;
- (id)itemTitleLocalizationKey;
- (id)updateUserSettingsWithValue:(BOOL)a0;

@end
