@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (id)init;
- (long long)changeTrackingBehaviors;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (BOOL)isDataAccessEnabled;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)enableDataAccess;
- (void).cxx_destruct;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)disableDataAccess;
- (void)enableBabySitter;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)initWithDaemonController:(id)a0;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void)disableBabySitter;
- (id)fetchStatusReportsWithError:(id *)a0;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (BOOL)isBabySitterEnabled;

@end
