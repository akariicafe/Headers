@class NSMutableArray;

@interface NMSSequentialItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_itemEnumerators;
}

- (void).cxx_destruct;
- (id)nextItem;
- (id)initWithItemEnumerators:(id)a0;

@end
