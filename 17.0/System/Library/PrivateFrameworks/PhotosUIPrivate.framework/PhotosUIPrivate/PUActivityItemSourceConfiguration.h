@class NSString, NSDictionary, PHAsset, PHAssetExportRequestOptions;

@interface PUActivityItemSourceConfiguration : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSDictionary *sharingVariants;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) struct { BOOL excludeLiveness; BOOL excludeLocation; BOOL excludeCaption; BOOL excludeAccessibilityDescription; BOOL includeAllOriginalResources; BOOL shareAsUnmodifiedOriginal; long long preferredExportFormat; } sharingPreferences;
@property (readonly, nonatomic) unsigned long long maxFileSizeLimit;
@property (readonly, nonatomic) long long outputType;
@property (readonly, nonatomic) BOOL requiresAssetExport;
@property (readonly, nonatomic) long long assetExportKind;
@property (readonly, nonatomic) PHAssetExportRequestOptions *assetExportRequestOptions;

+ (id)_activitiesThatDontAllowRAW;
+ (id)_activitiesThatDontRequireAssetExport;
+ (id)_activitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatOnlySupportMomentShareLinks;
+ (id)_activitiesThatSupportAssetBundles;
+ (id)_activitiesThatSupportHEIFHEVC;
+ (id)_activitiesThatSupportLivePhotoBundles;
+ (id)_activitiesThatSupportSpatial;
+ (BOOL)_dontAllowRAWForActivityType:(id)a0;
+ (id)_photosActionSheetActivities;
+ (id)_photosInternalActivities;
+ (BOOL)_shouldExportAsUnmodifiedOriginalForActivityType:(id)a0;
+ (id)_systemActivitiesThatDontSupportMomentShareLinks;
+ (id)descriptionForAssetExportKind:(long long)a0;
+ (id)descriptionForOutputType:(long long)a0;
+ (BOOL)isAssetBundleSupportedByActivityType:(id)a0;
+ (BOOL)isIndividualItemPreparationSupportedByActivityType:(id)a0;
+ (BOOL)isLivePhotoBundleSupportedByActivityType:(id)a0;
+ (BOOL)isMomentShareLinkSupportedByActivityType:(id)a0;
+ (unsigned long long)maxFileSizeLimitForActivityType:(id)a0 asset:(id)a1;
+ (BOOL)shouldExcludeAlternateVariantForActivityType:(id)a0;
+ (BOOL)shouldProvideAlternateVariantForActivityType:(id)a0 forAsset:(id)a1 inPreferredExportFormat:(long long)a2 withAvailableSharingVariants:(id)a3;
+ (BOOL)shouldProvideCompatibleFormatForActivityType:(id)a0 forAsset:(id)a1 inPreferredExportFormat:(long long)a2 withAvailableSharingVariants:(id)a3;
+ (BOOL)supportsAssetLocalIdentifierForActivityType:(id)a0;

- (void)_configure;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_customAccessibilityLabel;
- (BOOL)_requiresAssetExportForAsset:(id)a0 forActivityType:(id)a1;
- (BOOL)_requiresAssetsLibraryURLForAsset:(id)a0 forActivityType:(id)a1;
- (BOOL)_shouldFlattenSlomoVideoForActivityType:(id)a0;
- (id)_videoExportFileTypeForActivityType:(id)a0;
- (id)_videoExportPresetForActivityType:(id)a0;
- (BOOL)_wantsAssetBundleForActivityType:(id)a0;
- (BOOL)_wantsLivePhotoBundleForActivityType:(id)a0;
- (id)initWithAsset:(id)a0 availableSharingVariants:(id)a1 activityType:(id)a2 preferences:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; long long x6; })a3;

@end
