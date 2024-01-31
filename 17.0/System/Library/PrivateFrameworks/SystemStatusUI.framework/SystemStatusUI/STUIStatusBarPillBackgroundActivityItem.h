@class STUIStatusBarDisplayableContainerView, STUIStatusBarIdentifier, STUIStatusBarPillView;

@interface STUIStatusBarPillBackgroundActivityItem : STUIStatusBarBackgroundActivityItem

@property (class, readonly) STUIStatusBarIdentifier *pillCombinedDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarPillView *combinedView;
@property (retain, nonatomic) STUIStatusBarDisplayableContainerView *iconsView;
@property (nonatomic) struct CGSize { double width; double height; } pillSize;

+ (BOOL)_identifierContainsSecondaryItemImage:(id)a0;
+ (BOOL)_identifierContainsItemImage:(id)a0;
+ (BOOL)shouldKeepIconVisibleForActivityWithIdentifier:(id)a0;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_combinedView;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_iconsView;
- (id)createDisplayItemForIdentifier:(id)a0;
- (BOOL)_shouldBounceWhenTransitioningActivityWithIdentifier:(id)a0 toActivityWithIdentifier:(id)a1;

@end
