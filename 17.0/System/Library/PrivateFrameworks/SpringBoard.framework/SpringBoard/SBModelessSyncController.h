@class ATConnection;

@interface SBModelessSyncController : NSObject {
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    ATConnection *_airTrafficConnection;
}

@property (readonly, nonatomic) BOOL isAppSyncing;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isRestoringFromICloud;
@property (readonly, nonatomic) BOOL isAutoSyncing;
@property (readonly, nonatomic) BOOL isWirelessSyncing;

+ (id)sharedInstance;

- (void)_setAppSyncState:(BOOL)a0;
- (void)_updateIconsForStateChange;
- (id)init;
- (void)dealloc;
- (void)gotLowBatteryWarning;
- (void)connectionWasInterrupted:(id)a0;
- (void)setIsSyncing:(BOOL)a0;
- (void)_endObservingICloudRestoreStatus;
- (void)_appSyncStateChanged;
- (void)_beginObservingICloudRestoreStatus;
- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)endMonitoring;
- (void)_iCloudStatusChanged;

@end
