@class NSString, SBSystemAction, NSMutableArray;

@interface SBAbstractSystemActionExecutor : NSObject <SBSystemActionExecuting> {
    NSMutableArray *_executionCompletions;
}

@property (readonly, nonatomic) SBSystemAction *systemAction;
@property (readonly, nonatomic) BOOL canBeExecuted;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) double executionStartTime;
@property (readonly, nonatomic) double executionEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_isExecuting;
- (id)_beginInteractiveExecutionWithContext:(id)a0 error:(out id *)a1;
- (BOOL)_canBeExecuted;
- (void)_cancelPreviewing;
- (void)_finishExecutingWithResult:(id)a0;
- (id)_previewWithCoordinator:(id)a0;
- (void)cancelPreviewing;
- (id)executeWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithSystemAction:(id)a0;
- (id)previewWithCoordinator:(id)a0;

@end
