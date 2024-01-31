@class TURepeatingAction, NSObject;
@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isStopped) BOOL stopped;
@property (nonatomic, getter=isCurrentlyPerformingAction) BOOL currentlyPerformingAction;
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction;
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction;
@property (copy, nonatomic) id /* block */ attemptNextIterationBlock;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (id)init;
- (void)_beginRepeatingAction:(id)a0;
- (void)_completeWithDidFinish:(BOOL)a0;
- (void)_attemptNextIteration;
- (void)stop;
- (BOOL)_hasIterationsRemaining;
- (void)_stopWithDidFinish:(BOOL)a0;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
