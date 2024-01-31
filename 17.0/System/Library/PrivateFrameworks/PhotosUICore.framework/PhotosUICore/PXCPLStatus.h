@class NSString, NSDate;

@interface PXCPLStatus : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) long long percentCompletedForLibraryRebuild;
@property (nonatomic) long long percentCompletedForUpload;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) float fractionCompletedForLibraryRebuild;
@property (nonatomic) BOOL isRebuildingThumbnails;
@property (nonatomic) BOOL isSyncing;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsToUpload;
@property (nonatomic) float fractionCompletedForUpload;
@property (nonatomic) unsigned long long numberOfItemsToAdd;
@property (nonatomic) unsigned long long numberOfOriginalsToDownload;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfPhotoAssets;
@property (nonatomic) unsigned long long numberOfVideoAssets;
@property (nonatomic) unsigned long long numberOfOtherAssets;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic) BOOL isUserPaused;
@property (nonatomic) BOOL isInLowDataMode;
@property (nonatomic) BOOL isInLowPowerMode;
@property (nonatomic) BOOL isExceedingBatteryQuota;
@property (nonatomic) BOOL isExceedingCellularQuota;
@property (nonatomic) BOOL isLowDiskSpace;
@property (nonatomic) BOOL isVeryLowDiskSpace;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic) BOOL isCellularDataDisabled;
@property (nonatomic) BOOL isInAirplaneMode;
@property (nonatomic) BOOL isClientVersionTooOld;
@property (nonatomic) BOOL isClientNotAuthenticated;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL isInSoftResetSync;
@property (nonatomic) BOOL isInHardResetSync;
@property (nonatomic) BOOL isCapturingSnapshot;
@property (nonatomic) BOOL isOptimizingSystemPerformance;
@property (nonatomic) BOOL isInPoorNetworkConnection;
@property (nonatomic) BOOL isInModerateThermalPressure;
@property (nonatomic) BOOL isInHeavyThermalPressure;
@property (nonatomic) BOOL isInLowBattery;
@property (nonatomic) BOOL hasCloudQuotaOffer;
@property (nonatomic) BOOL cloudQuotaOfferHasAssetCounts;
@property (nonatomic) long long cloudQuotaState;
@property (nonatomic) long long sharedLibraryState;
@property (nonatomic) unsigned long long sharedLibraryExitingWithNumberOfAssetsRemaining;
@property (nonatomic) unsigned long long sharedLibraryMovingToShared;
@property (nonatomic) unsigned long long sharedLibraryMovingToPersonal;
@property (nonatomic) BOOL isExceedingSharedLibraryQuota;
@property (nonatomic) BOOL isLocalModeEnabled;
@property (nonatomic) BOOL isMockStatus;
@property (nonatomic) BOOL isUpgradeSuggestedToAccessAllPhotos;

+ (id)statusWithStringRepresentation:(id)a0;
+ (id)statusWithStringRepresentation:(id)a0 currentDate:(id)a1;

- (id)_dictionaryRepresentation;
- (id)init;
- (BOOL)_isEqualToCPLStatus:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDictionaryRepresentation:(id)a0 currentDate:(id)a1;

@end
