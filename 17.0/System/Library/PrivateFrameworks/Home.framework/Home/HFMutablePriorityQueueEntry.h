@interface HFMutablePriorityQueueEntry : NSObject

@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 priority:(long long)a1;

@end
