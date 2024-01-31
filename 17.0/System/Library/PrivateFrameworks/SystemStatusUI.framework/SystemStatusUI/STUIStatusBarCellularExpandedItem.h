@class STUIStatusBarIdentifier, STUIStatusBarBadgeView;

@interface STUIStatusBarCellularExpandedItem : STUIStatusBarCellularItem

@property (class, readonly) STUIStatusBarIdentifier *badgeDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarBadgeView *badgeView;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_badgeView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;

@end
