@class NSThread, NSTimer, JSVirtualMachine;
@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject

@property (class, readonly, nonatomic) WFRemoteQuarantinePolicyEvaluator *sharedEvaluator;

@property (readonly, nonatomic) NSThread *javaScriptEvaluationThread;
@property (retain, nonatomic) JSVirtualMachine *javaScriptVirtualMachine;
@property (readonly, nonatomic) struct __CFRunLoop { } *javaScriptEvaluationThreadRunLoop;
@property (readonly, nonatomic) NSTimer *javaScriptVirtualMachineDestructionTimer;
@property (weak, nonatomic) id<WFRemoteQuarantinePolicyEvaluatorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_evaluatePolicyForRequest:(id)a0 completion:(id /* block */)a1;
- (void)evaluatePolicyForRequest:(id)a0 completion:(id /* block */)a1;
- (id)remoteQuarantineHashForWorkflowReference:(id)a0;

@end
