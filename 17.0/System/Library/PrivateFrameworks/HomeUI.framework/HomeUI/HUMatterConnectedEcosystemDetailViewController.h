@class HUMatterConnectedEcosystemDetailItemManager, NSString;

@interface HUMatterConnectedEcosystemDetailViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HUMatterConnectedEcosystemDetailItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithConnectedEcosystem:(id)a0 connectedEcosystemItemProvider:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;

@end
