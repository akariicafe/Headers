@protocol TRITask;

@interface TRITaskQueueOperation : NSBlockOperation

@property (retain, nonatomic) id<TRITask> task;
@property BOOL inProgress;

- (void).cxx_destruct;

@end
