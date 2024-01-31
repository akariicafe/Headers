@class NSString, NSMutableDictionary, NSObject, AppEventListener;
@protocol OS_dispatch_queue;

@interface AppStateMonitor : NSObject <AppStateEventListenerDelegate> {
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    NSString *_notificationNameAppsWithStatesChanged;
    NSString *_notificationNameAppForegroundStateChanged;
    NSString *_notificationNameHasAnyForegroundAppChanged;
    BOOL _hasAnyForegroundApp;
    BOOL _handlesRnf;
    AppEventListener *_appEventListener;
}

@property (readonly, nonatomic) BOOL hasAnyForegroundApp;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)hasAnyForegroundApp;
+ (id)foregroundAppKeys;
+ (id)getAppsWithStates;

- (void)enable;
- (id)init;
- (id)trackerForPid:(int)a0;
- (BOOL)rbsProcessStateToForeground:(id)a0;
- (BOOL)identifierShouldBeIgnored:(id)a0;
- (id)foregroundAppKeys;
- (void).cxx_destruct;
- (void)_removeStateTracker:(id)a0 hadForeground:(BOOL *)a1 hasForeground:(BOOL *)a2;
- (id)getAppsWithStates;
- (BOOL)_trackerSetHasForeground:(id)a0;
- (BOOL)currentForegroundStateForProcessWithPid:(int)a0;
- (void)handleStateUpdate:(id)a0 forProcess:(id)a1;

@end
