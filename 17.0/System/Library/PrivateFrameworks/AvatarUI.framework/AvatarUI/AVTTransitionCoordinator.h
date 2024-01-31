@class NSMutableArray;
@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject

@property (retain, nonatomic) id<AVTTransitionScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *pendingTransitions;
@property (readonly, nonatomic) NSMutableArray *runningTransitions;
@property (readonly, nonatomic) double delay;

+ (id)concurrentTransitionCoordinatorWithDelay:(double)a0;
+ (id /* block */)eventHandlerForCoordinator:(id)a0;
+ (id)synchronousTransitionCoordinator;

- (id)init;
- (void)dealloc;
- (void)addTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancelTransitionsMatchingModel:(id)a0;
- (id)allTransitions;
- (void)cancelAllTransitions;
- (void)didCompleteRunningTransition:(id)a0;
- (void)startNextTransition;
- (id)transitionsMatchingModel:(id)a0;

@end
