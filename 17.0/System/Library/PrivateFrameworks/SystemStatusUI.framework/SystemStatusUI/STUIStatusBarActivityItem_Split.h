@class STUIStatusBarActivityIndicator, STUIStatusBarIdentifier, STUIStatusBarActivityView;

@interface STUIStatusBarActivityItem_Split : STUIStatusBarActivityItem_SyncOnly

@property (class, readonly) STUIStatusBarIdentifier *pillDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *syncStartDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarActivityView *activityView;
@property (retain, nonatomic) STUIStatusBarActivityIndicator *syncStartView;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_activityView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_syncStartView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })activityIndicatorAlignmentRectInsets;

@end
