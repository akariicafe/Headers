@class NSString, HDSPEnvironment;
@protocol _CDLocalContext;

@interface HDSPContextStoreManager : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } contextLock;
@property (readonly, nonatomic) id<_CDLocalContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (id)healthAppForegroundPredicate;
+ (id)contextualKeyPath;
+ (id)sleepAppForegroundPredicate;

- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)unregister:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (id)initWithEnvironment:(id)a0 context:(id)a1;
- (id)registerPredicate:(id)a0 identifier:(id)a1 callback:(id /* block */)a2;
- (void)updateForScheduleModelModifiedOnDate:(id)a0;
- (void)_writeSleepInfoToContextStore:(id)a0;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;

@end
