@class NSString, SUPreferences, NSDictionary;

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher

@property (retain, nonatomic) SUPreferences *preferences;
@property (readonly, nonatomic) NSString *fromVersion;
@property (readonly, nonatomic) NSString *fromBuild;
@property (readonly, nonatomic) NSString *fromProductType;
@property (readonly, nonatomic) NSString *fromReleaseType;
@property (readonly, nonatomic) NSDictionary *matcherInfo;
@property (nonatomic) BOOL compareWithTatsuForEligibility;

+ (id)matcherForCurrentDevice;
+ (id)matcherForCurrentDeviceWithInfo:(id)a0;
+ (id)matcherForCurrentDeviceWithInterestedStates:(int)a0;

- (void)dealloc;
- (id)_findMatchFromCandidates:(id)a0 error:(id *)a1;
- (id)_copyMatchingAssetsAfterSortingAndFiltering:(id)a0;
- (id)_createCleanOSVersionString:(id)a0;
- (id)_createSortedAndFilteredAssetResults:(id)a0 usingFirstKey:(id)a1 secondKey:(id)a2;
- (id)_filterPatchesIfNecessary:(id)a0;
- (unsigned long long)_getIndexOfHighestVersionedAsset:(id)a0 usingFirstKey:(id)a1 secondKey:(id)a2;
- (BOOL)_isDeviceEligibleForUpdate:(id)a0;
- (BOOL)_isPossibleSoftwareUpdate:(id)a0;
- (void)_modifyMADownloadOptions:(id)a0;
- (id)initWithVersion:(id)a0 build:(id)a1 productType:(id)a2 releaseType:(id)a3 interestedStates:(int)a4 matcherInfo:(id)a5;

@end
