@class VCPMediaAnalysisService, NSObject, PFWallpaperCompoundDeviceConfiguration;
@protocol OS_os_log;

@interface PGWallpaperSuggestionAssetGater : NSObject {
    unsigned long long _type;
    VCPMediaAnalysisService *_mediaAnalysisService;
    PFWallpaperCompoundDeviceConfiguration *_deviceWallpaperLayoutConfiguration;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (class, readonly) unsigned long long currentWallpaperPropertiesVersion;

@property (nonatomic) BOOL isUserInitiated;
@property (nonatomic) BOOL coversTracks;
@property (nonatomic) BOOL enableSettlingEffect;
@property (readonly, nonatomic) BOOL isLastGatingCallingMediaAnalysis;
@property (readonly, nonatomic) struct { int numberOfAssetsGated; int numberOfMediaAnalysisRequest; int numberOfValidWallpaperPropertiesRequested; int numberOfInvalidAnalysisVersion; int numberOfFailuresFromNilResult; int numberOfSuccessFromCache; int numberOfFailuresFromCache; int numberOfSuccessFromMediaAnalysisRequests; int numberOfFailuresFromMediaAnalysisRequests; } currentGatingStatistics;
@property (readonly, nonatomic) struct { int numberOfEliminationsThruFeatureDisabled; int numberOfEliminationsThruHardwareUnsupported; int numberOfEliminationsThruResourceAvailability; int numberOfEliminationsThruUnsupportedAdjustments; int numberOfEliminationsThruGenericError; int numberOfEliminationsThruMetadataCheck; int numberOfEliminationsThruStabilization; int numberOfEliminationsThruVideoQuality; int numberOfEliminationsThruMetadataIntegrity; int numberOfEliminationsThruFRC; int numberOfEliminationsThruVideoDecision; int numberOfEliminationsThruLayoutDecision; int numberOfEliminationsThruStillTransition; } settlingEffectGatingStatistics;

+ (id)assetFetchPropertySetsForGating;
+ (unsigned long long)_posterClassificationFromAssetGaterType:(unsigned long long)a0;
+ (int)numberOfFailuresAfterStabilizationFromStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; })a0;
+ (double)sydneyMD4FaceQualityFromAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 loggingConnection:(id)a1;
- (id)_gateAsset:(id)a0 wallpaperProperties:(id *)a1;
- (BOOL)_hasPetFaceWithWallpaperProperties:(id)a0;
- (BOOL)_passesSegmentationWithWallpaperProperties:(id)a0;
- (BOOL)_passesSettlingEffectWithWallpaperProperties:(id)a0;
- (id)_requestAnalysisTypes:(unsigned long long)a0 asset:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_requestWallpaperPropertiesForAsset:(id)a0 error:(id *)a1;
- (BOOL)assetIsUsingHeadroom:(id)a0;
- (BOOL)cacheExistsForAsset:(id)a0;
- (void)clearCacheOfAsset:(id)a0;
- (id)existingSegmentationScoresWithAsset:(id)a0;
- (id)existingWallpaperPropertiesWithAsset:(id)a0;
- (id)gateAsset:(id)a0;
- (id)gateAsset:(id)a0 hasPetFace:(BOOL *)a1;
- (id)gatingResultWithWallpaperProperties:(id)a0;
- (BOOL)hasValidAnalysisVersionForAsset:(id)a0;
- (void)logCurrentGatingStatisticsWithPrefix:(id)a0;
- (void)logCurrentSettlingEffectGatingStatisticsWithPrefix:(id)a0;
- (BOOL)persistWallpaperProperties:(id)a0 ofAsset:(id)a1 error:(id *)a2;
- (id)requestAndPersistWallpaperPropertiesForAsset:(id)a0;
- (id)requestWallpaperPropertiesForAsset:(id)a0 error:(id *)a1;
- (id)wallpaperPropertiesFromAnalysisResults:(id)a0 andAsset:(id)a1;

@end
