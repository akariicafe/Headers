@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)stringForSupport:(long long)a0;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (long long)newFormatsConfiguration;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (id)legacyCapabilities;
+ (id)capabilitiesForCurrentDevice;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;

- (id)description;
- (void).cxx_destruct;
- (id)platformInformation;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)decodingSupportForAVAsset:(id)a0;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithOpaqueRepresentation:(id)a0;
- (id)initWithPlatformInformation:(id)a0;
- (id)opaqueRepresentation;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (BOOL)supportsHDR;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)userDefaultsPeerOverrideValue;

@end
