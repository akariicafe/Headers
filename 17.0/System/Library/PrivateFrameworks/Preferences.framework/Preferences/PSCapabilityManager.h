@class NSNumber, NSMutableDictionary, AXCapabilityManager;

@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;
@property (retain, nonatomic) AXCapabilityManager *axCapabilityManager;

+ (id)sharedManager;

- (BOOL)hasCapabilities:(id)a0;
- (id)applicationDisplayIdentifiers;
- (id)init;
- (id)supportsPSPencilCapability;
- (id)supportsRetailKioskModeCapability;
- (id)supportsNightShiftCapability;
- (id)preferencesCapabilityAnswer:(id)a0;
- (id)supportsDisplayZoomCapability;
- (id)supportsInEDUModeCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsListeningExperienceCapbility;
- (id)supportPSRecordHDRVideoCapability;
- (id)supportsWalletApplePayCapability;
- (id)supportsPSCellularDataPlanCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsContinuityCamera;
- (id)supportPSPhotoFormatProRAWCapability;
- (id)supportsChamoisExternalDisplay;
- (void)setOverrideValue:(id)a0 forKey:(id)a1;
- (id)supportPSPhoneNoiseCancellationCapability;
- (id)supportsLightningAdapterCapability;
- (void).cxx_destruct;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsPSTrackpadAndMouseCapability;
- (id)supportsPSTrackpadOnlyCapability;
- (id)supportsPSExposureNotificationsCapability;
- (id)capabilityAnswer:(id)a0;
- (id)supportsPSTTYCapability;
- (void)resetOverrides;
- (id)supportsPictureInPictureCapability;
- (id)supportPSPhotoFormatEnhancedProRAWCapability;
- (id)supportsRaiseToWakeCapability;
- (id)supportsPSHomeScreenPhoneCapability;
- (BOOL)capabilityBoolAnswer:(id)a0;

@end
