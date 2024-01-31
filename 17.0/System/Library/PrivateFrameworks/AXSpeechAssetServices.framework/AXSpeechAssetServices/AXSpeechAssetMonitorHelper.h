@class AXAssetsService, NSObject;
@protocol OS_dispatch_queue;

@interface AXSpeechAssetMonitorHelper : NSObject {
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability { } *_reachability;
    AXAssetsService *_assetService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *longOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;

+ (id)sharedInstance;

- (id)init;
- (void)_updateSpeechSourceIdentifiersIfNeeded;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
- (BOOL)_platformSupportsMobileAssetVoices;
- (void)startMigrationOnDeviceUnlock;
- (id)speechAssetUpdaterClient;
- (void).cxx_destruct;
- (void)_registerForReachabilityNotifications;
- (void)_monitorSpeechAssetChanges;
- (void)_unregisterForReachabilityNotifications;
- (void)handeDeviceFirstUnlock;
- (void)_monitorForNetworkChanges;
- (id)_assetUpdaterClient;

@end
