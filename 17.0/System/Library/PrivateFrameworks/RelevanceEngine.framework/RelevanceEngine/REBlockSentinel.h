@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) id /* block */ failureBlock;

- (void)complete;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFailureBlock:(id /* block */)a0;

@end
