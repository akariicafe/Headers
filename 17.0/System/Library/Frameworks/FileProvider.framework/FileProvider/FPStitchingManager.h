@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray;

@interface FPStitchingManager : NSObject {
    NSHashTable *_stitchingSessions;
    NSMapTable *_bouncedItems;
}

@property (readonly, nonatomic) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
@property (readonly, nonatomic) NSArray *allPlaceholderReplacementsIDs;
@property (readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property (readonly, nonatomic) NSMutableArray *allDeletedIDs;

+ (id)sharedInstance;
+ (id)parentIdNameKeyForItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addBouncedItem:(id)a0;
- (BOOL)cleanStitchedForItemID:(id)a0 ignoreSession:(id)a1;
- (void)registerStitchingSession:(id)a0;
- (void)removeBouncedItemsWithIDs:(id)a0;
- (id)stitchedItemsForParentID:(id)a0;

@end
