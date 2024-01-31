@class NSCountedSet, CLInUseAssertion, NSMutableSet, BKSApplicationStateMonitor;

@interface SFLocationManager : NSObject {
    CLInUseAssertion *_assertion;
    NSCountedSet *_clients;
    NSMutableSet *_foregroundApplications;
    BKSApplicationStateMonitor *_stateMonitor;
}

+ (id)sharedLocationManager;
+ (void)setDefaultEffectiveBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_handleApplicationStateChange:(id)a0;
- (void)_setApplication:(id)a0 isForeground:(BOOL)a1;
- (void)_updateApplicationsToMonitor;
- (void)_updateAssertion;
- (void)addClientForApplication:(id)a0;
- (void)removeClientForApplication:(id)a0;

@end
