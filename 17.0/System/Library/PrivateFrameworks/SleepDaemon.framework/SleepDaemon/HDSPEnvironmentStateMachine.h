@class HDSPEnvironmentNotReadyState, NSString, HDSPEnvironmentReadyState, HDSPEnvironmentDemoState, HDSPEnvironmentMigrationState;
@protocol HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, NAScheduler;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPEnvironmentStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPEnvironmentStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPEnvironmentNotReadyState *notReadyState;
@property (readonly, nonatomic) HDSPEnvironmentMigrationState *migrationState;
@property (readonly, nonatomic) HDSPEnvironmentReadyState *readyState;
@property (readonly, nonatomic) HDSPEnvironmentDemoState *demoState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (void)systemDidBecomeReady;
- (BOOL)needsDataMigration;
- (BOOL)isSystemReady;
- (unsigned long long)loggingCategory;
- (void)environmentDidBecomeReady;
- (void).cxx_destruct;
- (void)dataMigrationDidComplete;
- (void)environmentShouldMigrateData;

@end
