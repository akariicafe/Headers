@class NSNumber, NSObject, BDSServiceProxy;
@protocol OS_dispatch_queue;

@interface BDSServiceNotificationCenter : NSObject <BDSServiceProxyConnectionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeTokenLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSNumber *changeTokenObject;
@property BOOL shouldMonitor;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;

+ (id)sharedInstance;

- (void)_startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)_postServiceNotificationNames:(id)a0 andUpdateChangeToken:(id)a1;
- (void)_startMonitoringServiceNotifications;
- (void)_updateChangeToken:(id)a0;
- (void)handleServiceNotificationNames:(id)a0 latestChangeToken:(long long)a1;
- (void)q_startMonitoringServiceNotifications;
- (void)serviceConnectionDidResume;
- (void)serviceDidRestart;

@end
