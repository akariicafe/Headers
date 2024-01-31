@class HMHome, HFItem;

@interface HUServiceDetailsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItem *sourceItem;

+ (id /* block */)serviceDetailsItemSectionComparatorForSortStrategy:(id)a0;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;

@end
