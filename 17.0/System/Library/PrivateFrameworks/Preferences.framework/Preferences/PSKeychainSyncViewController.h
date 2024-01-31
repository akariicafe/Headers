@class PSKeychainSyncHeaderView, PSSpecifier;
@protocol KeychainSyncViewControllerDelegate;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {
    PSKeychainSyncHeaderView *_headerView;
    PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) id<KeychainSyncViewControllerDelegate> delegate;

- (id)headerView;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (double)heightForHeaderInTableView:(id)a0;
- (id)viewForHeaderInTableView:(id)a0;
- (id)groupSpecifier;

@end
