@class NSMutableDictionary, BKSApplicationStateMonitor, NWPathEvaluator, NWMonitor, NSObject;
@protocol OS_dispatch_source;

@interface NWSystemPathMonitor : NSObject

@property (retain) NWMonitor *vpnMonitor;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property int vpnNotifyToken;
@property int symptomsNotifyToken;
@property (retain) BKSApplicationStateMonitor *applicationMonitor;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property void *fallbackWatcher;
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher;
@property (nonatomic, getter=isVPNActive) BOOL vpnActive;
@property (nonatomic, getter=isWiFiPrimary) BOOL wifiPrimary;
@property (nonatomic, getter=isEthernetPrimary) BOOL ethernetPrimary;

+ (id)sharedSystemPathMonitor;

- (void)updateVPNMonitor;
- (id)init;
- (void)dealloc;
- (void)updateFlags;
- (void)appStateChangedWithUserInfo:(id)a0;
- (void)eventFired;
- (BOOL)getSymptomsFallback;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startWatchingApplicationStates;
- (void)registerForSymptomsFallbackNotification;
- (void)registerForVPNNotifications;
- (void)stopWatchingApplicationStates;

@end
