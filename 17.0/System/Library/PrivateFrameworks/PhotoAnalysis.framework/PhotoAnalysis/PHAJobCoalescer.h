@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject

@property (weak, nonatomic) id<PHAJobCoalescerDelegate> delegate;

- (id)init;
- (void)addJob:(id)a0;
- (void).cxx_destruct;

@end
