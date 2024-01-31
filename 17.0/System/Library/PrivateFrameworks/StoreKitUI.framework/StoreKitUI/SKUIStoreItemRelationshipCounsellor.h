@class NSMutableDictionary, NSRecursiveLock;

@interface SKUIStoreItemRelationshipCounsellor : NSObject

@property (retain, nonatomic) NSMutableDictionary *relationshipsDictionary;
@property (readonly, nonatomic) NSRecursiveLock *lock;

- (id)init;
- (void).cxx_destruct;
- (id)childItemsForItem:(id)a0;
- (void)addChildren:(id)a0 forParent:(id)a1;
- (id)familyForItem:(id)a0;
- (BOOL)itemHasChildren:(id)a0;
- (BOOL)itemHasParent:(id)a0;
- (id)parentItemForItem:(id)a0;
- (void)removeAllRelationshipsForItem:(id)a0;
- (void)setChildren:(id)a0 forParent:(id)a1;
- (id)siblingItemsForItem:(id)a0;

@end
