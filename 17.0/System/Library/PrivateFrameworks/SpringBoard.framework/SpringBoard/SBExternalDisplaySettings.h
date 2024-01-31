@class PTOutlet, SBExternalDisplayRuntimeAvailabilitySettings;

@interface SBExternalDisplaySettings : PTSettings

@property (nonatomic) double fakeStorageForContentsScale;
@property (nonatomic) BOOL fakeStorageForWirelessDisplaySupport;
@property (nonatomic) BOOL fakeStorageForUnderpoweredDeviceSupport;
@property (nonatomic) BOOL fakeStorageForChamois97748869Enabling;
@property (retain, nonatomic) SBExternalDisplayRuntimeAvailabilitySettings *availabilitySettings;
@property (nonatomic) long long activeDisplayTrackingMethodology;
@property (retain, nonatomic) PTOutlet *killSpringBoardOutlet;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
