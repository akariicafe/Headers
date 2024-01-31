@class NSArray, NSMutableOrderedSet;

@interface WBSHistoryTopicTag : WBSHistoryTag {
    NSMutableOrderedSet *_taggedItems;
}

@property (readonly, copy, nonatomic) NSArray *historyItems;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)tagHistoryItem:(id)a0;
- (BOOL)containsHistoryItem:(id)a0;
- (void)groupHistoryItemsBySessionWithCompletionHandler:(id /* block */)a0;
- (id)initWithTag:(id)a0 historyItems:(id)a1;
- (id)initWithTitle:(id)a0 identifier:(id)a1 databaseID:(long long)a2 modificationTimestamp:(double)a3 level:(long long)a4;
- (void)removeHistoryItems:(id)a0;

@end
