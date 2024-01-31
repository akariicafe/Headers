@class NSString, NSMutableDictionary, NWEntityMapper, NSObject;
@protocol OS_dispatch_queue;

@interface AppStateHandler : NSObject <NWAppStateEventListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    NWEntityMapper *_entityMapper;
    BOOL _hasAnyForegroundApp;
    BOOL _handlesRnf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAppsWithStates;

- (void)configure:(id)a0;
- (BOOL)hasAnyForegroundApp;
- (id)trackerForPid:(int)a0;
- (id)initWithMapper:(id)a0;
- (BOOL)rbsProcessStateToForeground:(id)a0;
- (id)_getAppsWithStates;
- (BOOL)identifierShouldBeIgnored:(id)a0;
- (id)foregroundAppKeys;
- (void).cxx_destruct;
- (void)_removeStateTracker:(id)a0 hadForeground:(BOOL *)a1 hasForeground:(BOOL *)a2;
- (BOOL)_trackerSetHasForeground:(id)a0;
- (BOOL)currentForegroundStateForProcessWithPid:(int)a0;
- (void)handleStateUpdate:(id)a0 forProcess:(id)a1;

@end
