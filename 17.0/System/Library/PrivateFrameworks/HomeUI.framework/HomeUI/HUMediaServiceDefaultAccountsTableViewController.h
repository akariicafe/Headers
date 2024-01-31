@class HUMediaServiceDefaultAccountsItemManager, NSString, HUMediaServiceDefaultAccountsItemModuleController, HFUserItem;

@interface HUMediaServiceDefaultAccountsTableViewController : HUItemTableViewController <HUMediaServiceDefaultAccountsItemModuleControllerDelegate>

@property (readonly, copy, nonatomic) HFUserItem *userItem;
@property (readonly, copy, nonatomic) HUMediaServiceDefaultAccountsItemManager *mediaServiceDefaultAccountsItemManager;
@property (retain, nonatomic) HUMediaServiceDefaultAccountsItemModuleController *mediaServiceDefaultAccountsItemModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItem:(id)a0 home:(id)a1;
- (id)itemModuleControllers;
- (void)mediaServiceDefaultAccountsItemModuleController:(id)a0 didUpdateDefaultAccount:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;

@end
