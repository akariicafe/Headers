@class STWifiStatusDomainPublisher, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_updateQueue;
}

@property (readonly, nonatomic) STWifiStatusDomainPublisher *wifiDataPublisher;
@property (nonatomic, getter=isWifiActive) BOOL wifiActive;
@property (nonatomic, getter=isFallingBackToCellular) BOOL fallingBackToCellular;
@property (nonatomic) void *cellularFallbackWatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_queue_updateData;
- (void)_queue_updateWifiActive;
- (void).cxx_destruct;
- (void)_updateWifiActive;
- (void)_updateData;

@end
