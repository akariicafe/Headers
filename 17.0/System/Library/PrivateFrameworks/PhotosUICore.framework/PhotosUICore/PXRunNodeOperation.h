@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isExecuting;
- (BOOL)isReady;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
