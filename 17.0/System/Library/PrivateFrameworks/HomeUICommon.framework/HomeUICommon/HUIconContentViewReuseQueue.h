@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *reuseStack;
@property (readonly, nonatomic) Class contentViewClass;

+ (id)globalReuseQueueForContentViewClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (id)dequeueContentView;
- (id)initWithContentViewClass:(Class)a0;
- (void)reapContentView:(id)a0;

@end
