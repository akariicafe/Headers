@class NSString;

@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy> {
    id /* block */ _priorityComparator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)enqueueObject:(id)a0 buffer:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_insertionIndexForObject:(id)a0 buffer:(id)a1;
- (id)initWithComparator:(id /* block */)a0;

@end
