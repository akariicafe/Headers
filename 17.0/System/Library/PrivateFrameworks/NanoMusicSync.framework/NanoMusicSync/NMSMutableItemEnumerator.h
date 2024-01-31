@class NSMutableArray;

@interface NMSMutableItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_items;
    unsigned long long _itemIndex;
}

- (id)init;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)nextItem;
- (BOOL)hasItems;

@end
