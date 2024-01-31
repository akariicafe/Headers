@interface PLInstrumentedBlockOperation : NSBlockOperation

@property (nonatomic) double creationTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) BOOL postambleAdded;
@property (readonly, nonatomic) double timeSpentWaitingInQueue;
@property (readonly, nonatomic) double executionTime;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)init;
- (void)addExecutionBlock:(id /* block */)a0;
- (id)description;
- (double)executionTime;
- (double)timeSpentWaitingInQueue;

@end
