@class NSArray;

@interface WDAddDataManualEntrySectionData : NSObject {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (id)_cells;
- (id)cellAtIndex:(long long)a0;
- (id)itemForCell:(id)a0;

@end
