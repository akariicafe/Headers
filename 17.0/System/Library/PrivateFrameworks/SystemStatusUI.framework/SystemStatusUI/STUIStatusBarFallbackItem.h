@class STUIStatusBarStringView;

@interface STUIStatusBarFallbackItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarStringView *label;

- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_label;

@end
