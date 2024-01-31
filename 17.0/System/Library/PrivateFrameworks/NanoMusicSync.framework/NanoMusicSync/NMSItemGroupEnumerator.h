@class NSArray, NMSMediaItemGroup;

@interface NMSItemGroupEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NMSMediaItemGroup *_itemGroup;
    NSArray *_itemList;
    unsigned long long _itemIndex;
}

- (void).cxx_destruct;
- (id)nextItem;
- (id)initWithItemGroup:(id)a0;

@end
