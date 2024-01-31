@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject

@property (nonatomic) double minCoalescenceInterval;
@property (nonatomic) double maxCoalescenceInterval;
@property (retain) id value;
@property (weak, nonatomic) id<STDebouncerDelegate> delegate;

- (void)_delegate;
- (void)bounce:(id)a0;
- (void)_timeout;
- (void).cxx_destruct;
- (void)_idle;
- (id)initWithMinCoalescenceInterval:(double)a0 maxCoalescenceInterval:(double)a1;

@end
