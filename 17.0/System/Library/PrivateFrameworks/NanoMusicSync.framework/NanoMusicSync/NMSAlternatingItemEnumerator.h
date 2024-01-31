@class NSMutableArray;

@interface NMSAlternatingItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_itemEnumerators;
    unsigned long long _itemEnumeratorIndex;
}

- (void).cxx_destruct;
- (id)nextItem;
- (id)initWithItemEnumerators:(id)a0;

@end
