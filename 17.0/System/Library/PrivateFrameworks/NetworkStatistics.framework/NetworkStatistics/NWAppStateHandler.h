@class NSString, NSMutableDictionary;

@interface NWAppStateHandler : NSObject <NWAppStateEventListenerDelegate> {
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    BOOL _handlesRnf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)trackerForPid:(int)a0;
- (BOOL)rbsProcessStateToForeground:(id)a0;
- (BOOL)identifierShouldBeIgnored:(id)a0;
- (void).cxx_destruct;
- (BOOL)currentForegroundStateForProcessWithPid:(int)a0;
- (void)handleStateUpdate:(id)a0 forProcess:(id)a1;
- (void)_removeStateTracker:(id)a0;

@end
