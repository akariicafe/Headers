@class NSString;

@interface _NAPriorityQueueingStrategy : NSObject <NAQueueingStrategy> {
    id /* block */ _priorityComparator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
