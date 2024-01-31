@interface HFReorderableItemList : HFReorderableItemListAbstractBase {
    void /* unknown type, empty encoding */ sortedIdentifiers;
    void /* unknown type, empty encoding */ applicationDataKey;
}

@property (nonatomic, readonly) BOOL isEmpty;

- (void)setSortedItems:(id)a0;
- (void).cxx_destruct;
- (id)saveWithSender:(id)a0;
- (id)initWithApplicationDataContainer:(id)a0 category:(id)a1;
- (BOOL)sortedIdentifiersWithIdentifier1:(id)a0 identifier2:(id)a1;
- (BOOL)sortedItemsWithItem1:(id)a0 item2:(id)a1;

@end
