@interface SBPPTBlockOperation : SBPPTOperation {
    BOOL _cancelled;
}

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

+ (id)operationWithName:(id)a0 block:(id /* block */)a1;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)operationWithBlock:(id /* block */)a0;
+ (id)keyPathsForValuesAffectingIsFinished;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isExecuting;
- (id)init;
- (void)finish;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (id)description;
- (void)cancelAndFailTestWithReason:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
