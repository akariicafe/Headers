@class NSMutableArray;

@interface PXPeopleMetricsActionQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
}

@property (readonly, nonatomic) NSMutableArray *items;

- (id)init;
- (void)clearQueue;
- (void).cxx_destruct;
- (void)addItemToFront:(id)a0;
- (BOOL)containsPerson:(id)a0;
- (void)addItemToEnd:(id)a0;
- (id)getNextItemAndPop;

@end
