@class STUIStatusBarStringView;

@interface STUIStatusBarVPNItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarStringView *vpnView;

- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_vpnView;

@end
