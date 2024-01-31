@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)popItem;
- (void)addObject:(id)a0;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
