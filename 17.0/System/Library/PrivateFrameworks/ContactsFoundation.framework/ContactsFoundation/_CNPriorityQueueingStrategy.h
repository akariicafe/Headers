@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy>

@property (readonly, copy, nonatomic) id /* block */ priorityComparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
