@class SALocationManager, NSString, NSMutableArray, SACriticalNotification, SATelephonyManager, NSObject, SACrashDetectionEvent, CLLocation, SABundleManager, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SAServer : NSObject <SAServerProtocol, SATelephonyDelegateProtocol, SALocationManagerProtocol, NSXPCListenerDelegate> {
    SATelephonyManager *_telephonyManager;
    SABundleManager *_bundleManager;
    SALocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSXPCListener *_listener;
    NSMutableArray *_clientConnections;
    SACriticalNotification *_criticalNotification;
}

@property (copy, nonatomic) CLLocation *mostRecentLocation;
@property (copy, nonatomic) SACrashDetectionEvent *mostRecentCrashEvent;
@property (nonatomic) long long numberOfVoiceCallAttempts;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *locationAcquired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)emergencyResponseVoiceCallTimeout;

- (void)startMonitoringLocation;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocation:(id)a1;
- (void)notifyCrashDetectedAt:(id)a0 resolvedAt:(id)a1 resolvedWithResponse:(long long)a2 completion:(id /* block */)a3;
- (void)notifyCrashDetectedAt:(id)a0 resolvedAt:(id)a1 resolvedWithResponse:(long long)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)requestMostRecentCrashDetectionEvent;
- (void)telephonyManager:(id)a0 didUpdateVoiceCallStatus:(long long)a1;
- (void)updateMostRecentCrashDetectionEvent:(id)a0 completion:(id /* block */)a1;
- (void)stopMonitoringLocation;
- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateVoiceCallStatus:(long long)a0;
- (void)iterateClientProxies:(id /* block */)a0;
- (void)sendCrashEventToClients;
- (void)requestCrashDetectionAuthorization:(id /* block */)a0;
- (void)recoverMostRecentCrashEvent;

@end
