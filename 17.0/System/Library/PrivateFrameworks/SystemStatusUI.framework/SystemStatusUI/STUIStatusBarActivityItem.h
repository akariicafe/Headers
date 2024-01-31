@class STUIStatusBarActivityIndicator;

@interface STUIStatusBarActivityItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarActivityIndicator *activityIndicator;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } activityIndicatorAlignmentRectInsets;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (BOOL)_enableForType:(long long)a0;
- (void)_create_activityIndicator;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;

@end
