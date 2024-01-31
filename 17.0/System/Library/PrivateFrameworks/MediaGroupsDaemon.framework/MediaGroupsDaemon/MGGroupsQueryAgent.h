@class NSOperationQueue, NSDictionary, MGGroupIdentifier;
@protocol MGGroupsQueryAgentDelegate;

@interface MGGroupsQueryAgent : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) NSDictionary *operations;
@property (copy, nonatomic) NSDictionary *groupsByMediator;
@property (copy, nonatomic) NSDictionary *groups;
@property (copy, nonatomic) MGGroupIdentifier *currentIdentifier;
@property (copy, nonatomic) NSDictionary *containers;
@property (copy, nonatomic) NSDictionary *variables;
@property (copy, nonatomic) NSDictionary *queries;
@property (readonly, weak, nonatomic) id<MGGroupsQueryAgentDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)setCurrentDeviceIdentifier:(id)a0;
- (void)groupsMediator:(id)a0 didUpdateGroups:(id)a1;
- (void)_performQueryExchangeUsingGroups:(id)a0 currentIdentifier:(id)a1;
- (void)_prepareWithGroups:(id)a0 currentIdentifier:(id)a1;
- (void)_queryOperation:(id)a0 didFindGroups:(id)a1;
- (void)addOutstandingQuery:(id)a0;
- (void)groupsMediatorRemoved:(id)a0;
- (id)outstandingQueryForIdentifier:(id)a0;
- (void)removeOutstandingQuery:(id)a0;

@end
