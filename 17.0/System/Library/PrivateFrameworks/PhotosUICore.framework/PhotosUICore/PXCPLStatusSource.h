@class NSString, CPLStatus, NSDate;

@interface PXCPLStatusSource : PXObservable <CPLStatusDelegate, PXCPLMutableStatusSource> {
    CPLStatus *_status;
}

@property (readonly, copy, nonatomic) NSDate *exitDate;
@property (readonly, copy, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) BOOL isExceedingQuota;
@property (readonly, nonatomic) BOOL isExceedingSharedLibraryQuota;
@property (readonly, nonatomic) BOOL isClientVersionTooOld;
@property (readonly, nonatomic) BOOL isClientNotAuthenticated;
@property (readonly, nonatomic) BOOL isExceedingBatteryQuota;
@property (readonly, nonatomic) BOOL isExceedingCellularQuota;
@property (readonly, nonatomic) BOOL isCellularDataDisabled;
@property (readonly, nonatomic) BOOL isInAirplaneMode;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, nonatomic) BOOL isInLowDataMode;
@property (readonly, nonatomic) BOOL isInLowPowerMode;
@property (readonly, nonatomic) BOOL isLowDiskSpace;
@property (readonly, nonatomic) BOOL isVeryLowDiskSpace;
@property (readonly, nonatomic) unsigned long long sharedLibraryExitingWithNumberOfAssetsRemaining;
@property (readonly, nonatomic) BOOL isCapturingSnapshot;
@property (readonly, nonatomic) BOOL isOptimizingSystemPerformance;
@property (readonly, nonatomic) BOOL isInPoorNetworkConnection;
@property (readonly, nonatomic) BOOL isInModerateThermalPressure;
@property (readonly, nonatomic) BOOL isInHeavyThermalPressure;
@property (readonly, nonatomic) BOOL isInLowBattery;
@property (readonly, nonatomic) BOOL isUpgradeSuggestedToAccessAllPhotos;
@property (readonly, nonatomic) unsigned long long numberOfPhotoAssets;
@property (readonly, nonatomic) unsigned long long numberOfVideoAssets;
@property (readonly, nonatomic) unsigned long long numberOfOtherAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExitDate:(id)a0;
- (void)setIsExceedingQuota:(BOOL)a0;
- (void)setIsExceedingSharedLibraryQuota:(BOOL)a0;
- (void)setIsInAirplaneMode:(BOOL)a0;
- (void)setIsInPoorNetworkConnection:(BOOL)a0;
- (void)setIsUpgradeSuggestedToAccessAllPhotos:(BOOL)a0;
- (void)setIsOptimizingSystemPerformance:(BOOL)a0;
- (void)statusDidChange:(id)a0;
- (void)setSharedLibraryExitingWithNumberOfAssetsRemaining:(unsigned long long)a0;
- (void)setIsClientVersionTooOld:(BOOL)a0;
- (void)setNumberOfPhotoAssets:(unsigned long long)a0;
- (void)setNumberOfVideoAssets:(unsigned long long)a0;
- (void)setIsOffline:(BOOL)a0;
- (void)setNumberOfOtherAssets:(unsigned long long)a0;
- (void)_updateStatus;
- (void)setIsInLowBattery:(BOOL)a0;
- (void)setIsCapturingSnapshot:(BOOL)a0;
- (void)setIsInLowDataMode:(BOOL)a0;
- (void)setIsClientNotAuthenticated:(BOOL)a0;
- (void)setIsCellularDataDisabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setIsExceedingBatteryQuota:(BOOL)a0;
- (void)setIsExceedingCellularQuota:(BOOL)a0;
- (void)setIsInLowPowerMode:(BOOL)a0;
- (void)setIsVeryLowDiskSpace:(BOOL)a0;
- (void)setIsInHeavyThermalPressure:(BOOL)a0;
- (void)setIsLowDiskSpace:(BOOL)a0;
- (void)setIsInModerateThermalPressure:(BOOL)a0;
- (void)setSyncDate:(id)a0;
- (id)initWithStatus:(id)a0;

@end
