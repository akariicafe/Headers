@class NSHashTable, NSArray, NSMutableOrderedSet;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver>

@property (readonly, nonatomic) NSMutableOrderedSet *runningWorkflowControllerSet;
@property (readonly, nonatomic) NSHashTable *workflowControllerAssertionTable;
@property (readonly, nonatomic) NSArray *runningWorkflows;
@property (readonly, nonatomic) NSArray *runningWorkflowControllers;
@property (copy, nonatomic) id /* block */ demoResetBlock;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)updateAssertions;
- (void)updateRunningWorkflowCount;
- (void)workflowControllerDidStart:(id)a0;
- (void)workflowControllerDidStop:(id)a0;

@end
