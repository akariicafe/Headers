@class STUIStatusBarIdentifier, STUIStatusBarStringView;

@interface STUIStatusBarFullBackgroundActivityItem : STUIStatusBarBackgroundActivityItem

@property (class, readonly) STUIStatusBarIdentifier *detailDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarStringView *detailStringView;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_backgroundView;
- (void)_create_detailStringView;

@end
