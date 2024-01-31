@class PSSpecifier;

@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell

@property (weak, nonatomic) PSSpecifier *specfier;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)canReload;
- (void)controlChanged:(id)a0;
- (id)getSwitch;
- (BOOL)globalFriendListAccess;

@end
