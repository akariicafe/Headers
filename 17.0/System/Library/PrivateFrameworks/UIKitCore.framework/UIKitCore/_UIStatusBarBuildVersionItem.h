@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)_create_buildVersionView;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;

@end
