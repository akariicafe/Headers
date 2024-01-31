@class STUIStatusBarStringView;

@interface STUIStatusBarBuildVersionItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarStringView *buildVersionView;

- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)_create_buildVersionView;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;

@end
