@class HUHomeHubHeaderView, HUBridgeListItemManager, NSString;

@interface HUBridgeListViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HUBridgeListItemManager *itemManager;
@property (retain, nonatomic) HUHomeHubHeaderView *homehubHeaderView;
@property (nonatomic) BOOL shouldShowHomeHubWarningHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithHome:(id)a0;
- (Class)_bridgeDetailsViewControllerClass;
- (id)_presentBridgeSettingsForItem:(id)a0 animated:(BOOL)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)itemTableHeaderView;
- (id)presentBridgeSettingsForAccessory:(id)a0 animated:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;

@end
