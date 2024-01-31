@class DMFApplicationPolicyMonitor, NSHashTable;

@interface SBHSimpleApplicationPolicyMonitor : NSObject {
    NSHashTable *_registeredApplications;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) SBHSimpleApplicationPolicyMonitor *sharedInstance;

@property (readonly, nonatomic) DMFApplicationPolicyMonitor *policyMonitor;

- (id)init;
- (void)registerApplication:(id)a0;
- (void)updateAllPolicies;
- (void).cxx_destruct;
- (void)unregisterApplication:(id)a0;

@end
