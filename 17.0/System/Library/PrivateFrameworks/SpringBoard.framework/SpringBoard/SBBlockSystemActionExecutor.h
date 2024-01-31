@class SBBlockSystemAction;
@protocol SBSystemActionPreviewInvalidatable;

@interface SBBlockSystemActionExecutor : SBAbstractSystemActionExecutor {
    id<SBSystemActionPreviewInvalidatable> _previewAssertion;
    BOOL _executing;
}

@property (readonly, nonatomic) SBBlockSystemAction *systemAction;

- (void).cxx_destruct;
- (BOOL)_isExecuting;
- (id)_beginInteractiveExecutionWithContext:(id)a0 error:(out id *)a1;
- (BOOL)_canBeExecuted;
- (void)_cancelPreviewing;
- (id)_previewWithCoordinator:(id)a0;
- (id)initWithSystemAction:(id)a0;

@end
