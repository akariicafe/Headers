@class NSSet, NSMapTable;

@interface PBFPriorityQueue : NSObject {
    NSMapTable *_priorityQueueForIdentifier;
    NSMapTable *_activeItemsForIdentifier;
}

@property (readonly, copy, nonatomic) NSSet *identifiers;
@property (readonly, copy, nonatomic) NSSet *enqueuedIdentifiers;
@property (readonly, copy, nonatomic) NSSet *activeIdentifiers;
@property (readonly, nonatomic) unsigned long long numberOfActiveItems;
@property (readonly, nonatomic) unsigned long long numberOfEnqueuedItems;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (BOOL)removeActiveItem:(id)a0 forIdentifier:(id)a1;
- (id)activeItemsForIdentifier:(id)a0;
- (void)enqueueItem:(id)a0 forIdentifier:(id)a1;
- (id)enqueuedItemsForIdentifier:(id)a0;
- (id)filterEnqueuedItemForIdentifier:(id)a0 passingTest:(id /* block */)a1;
- (id)firstActiveItemForIdentifier:(id)a0 passingTest:(id /* block */)a1;
- (void)markItemActive:(id)a0 forIdentifier:(id)a1;
- (unsigned long long)numberOfActiveItemForIdentifier:(id)a0;
- (unsigned long long)numberOfEnqueuedUpItemsForIdentifier:(id)a0;
- (void)removeAllActiveItems;
- (void)removeAllEnqueuedItems;
- (BOOL)removeEnqueuedItem:(id)a0 forIdentifier:(id)a1;
- (void)sortItemsForIdentifier:(id)a0 usingComparator:(id /* block */)a1;

@end
