@class HUNetworkRouterManualReconfigurationItemManager;

@interface HUNetworkRouterManualReconfigurationViewController : HUItemTableViewController

@property (readonly, nonatomic) HUNetworkRouterManualReconfigurationItemManager *itemManager;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithHome:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
