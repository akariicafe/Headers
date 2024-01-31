@class NSArray, RBSProcessMonitor;

@interface BKSApplicationStateMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_monitor;
    NSArray *_interestedAssertionReasons;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) unsigned int interestedStates;
@property (readonly, copy, nonatomic) NSArray *interestedBundleIDs;
@property (readonly, nonatomic) BOOL elevatedPriority;

- (void)applicationInfoForPID:(int)a0 completion:(id /* block */)a1;
- (BOOL)_clientSubscribedToThisStateChange:(id)a0 state:(id)a1 prevState:(id)a2;
- (id)init;
- (id)bundleInfoValueForKey:(id)a0 PID:(int)a1;
- (void)dealloc;
- (void)updateInterestedBundleIDs:(id)a0 states:(unsigned int)a1;
- (id)applicationInfoForPID:(int)a0;
- (void)invalidate;
- (unsigned int)applicationStateForApplication:(id)a0;
- (void)applicationInfoForApplication:(id)a0 completion:(id /* block */)a1;
- (void)updateInterestedStates:(unsigned int)a0;
- (BOOL)_clientSubscribedToThisReasonChange:(id)a0;
- (void)updateInterestedBundleIDs:(id)a0;
- (id)applicationInfoForApplication:(id)a0;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1;
- (unsigned int)mostElevatedApplicationStateForPID:(int)a0;
- (id)_legacyInfoForProcess:(id)a0 state:(id)a1;
- (void).cxx_destruct;
- (void)updateInterestedAssertionReasons:(id)a0;
- (id)initWithEndpoint:(id)a0 bundleIDs:(id)a1 states:(unsigned int)a2 elevatedPriority:(BOOL)a3;
- (id)_legacyInfoForProcess:(id)a0;
- (void)lock_updateConfiguration;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 elevatedPriority:(BOOL)a2;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 isUserInteractive:(BOOL)a2;
- (unsigned int)_legacyStateForProcess:(id)a0 state:(id)a1;

@end
