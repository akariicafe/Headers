@class NSString;

@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy>

@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dequeueObject:(id)a0 buffer:(id)a1;
- (void).cxx_destruct;
- (void)enqueueObject:(id)a0 replaceIfExists:(BOOL)a1 buffer:(id)a2;
- (unsigned long long)_insertionIndexForObject:(id)a0 buffer:(id)a1;
- (id)initWithComparator:(id /* block */)a0;
- (unsigned long long)_indexForObject:(id)a0 buffer:(id)a1;

@end
