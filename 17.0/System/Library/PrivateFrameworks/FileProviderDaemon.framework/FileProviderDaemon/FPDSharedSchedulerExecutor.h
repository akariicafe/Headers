@interface FPDSharedSchedulerExecutor : NSObject

@property (nonatomic) BOOL isDone;
@property (readonly, nonatomic) id /* block */ executor;

- (id)initWithExecutor:(id /* block */)a0;
- (void).cxx_destruct;

@end
