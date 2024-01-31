@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {
    NSMutableOrderedSet *_itemsWithExactNameMatch;
    NSMutableOrderedSet *_itemsWithNameMatch;
    NSMutableOrderedSet *_itemsWithCategoryMatch;
    NSMutableOrderedSet *_itemsWithKeywordMatch;
}

- (id)init;
- (void).cxx_destruct;
- (id)rankedItems;
- (id)orderedSetForType:(unsigned long long)a0;
- (void)addItem:(id)a0 forType:(unsigned long long)a1;
- (void)prioritizeItem:(id)a0 type:(unsigned long long)a1;

@end
