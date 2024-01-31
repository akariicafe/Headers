@class NSString, NSMutableDictionary, DNDSXPCEventPublisher, NSObject, DNDSAppConfigurationManager;
@protocol OS_dispatch_queue, DNDSAppFocusConfigurationCoordinatorDelegate, DNDSKeybagStateProviding;

@interface DNDSAppFocusConfigurationCoordinator : NSObject <DNDSAppConfigurationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_queuedTasksByBundleIdentifier;
    NSMutableDictionary *_taskGroups;
    NSMutableDictionary *_groupDetails;
    DNDSAppConfigurationManager *_appConfigurationManager;
    DNDSXPCEventPublisher *_xpcEventPublisher;
    id<DNDSKeybagStateProviding> _keybag;
}

@property (weak, nonatomic) id<DNDSAppFocusConfigurationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appConfigurationManager:(id)a0 didClearActionWithIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3;
- (BOOL)_shouldExecuteActionOnApplicationWithBundleIdentifier:(id)a0;
- (void)_executeOrQueueTask:(id)a0 completion:(id /* block */)a1;
- (void)appConfigurationManager:(id)a0 didClearActionsForAppsInModeIdentifiers:(id)a1;
- (void)_addTask:(id)a0 toGroupWithIdentifier:(id)a1;
- (void)_workQueue_handleFirstLaunch;
- (void)_incrementTasksExecutedForGroupWithIdentifier:(id)a0;
- (BOOL)_removeTask:(id)a0 fromGroupWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)handleStateUpdate:(id)a0;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)_executeAction:(id)a0 withBundleIdentifier:(id)a1 modeIdentifier:(id)a2 groupIdentifier:(id)a3;
- (id)_groupIdentifierForStateUpdate:(id)a0;
- (void)_executeQueuedTaskFollowingTask:(id)a0;
- (void)_xpcCheckIn;
- (void)appConfigurationManager:(id)a0 didSetAction:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3;
- (id)_currentModeIdentifier;
- (void)_groupWithIdentifierCompleted:(id)a0;
- (id)initWithAppConfigurationManager:(id)a0 keybagProviding:(id)a1 xpcEventPublisher:(id)a2;
- (void)_executeAction:(id)a0 orActionIdentifier:(id)a1 withBundleIdentifier:(id)a2 modeIdentifier:(id)a3 groupIdentifier:(id)a4 exiting:(BOOL)a5 metadataProvider:(id)a6;

@end
