@class HFServiceActionItem, UIColor, NSString, HUControlPanelController;
@protocol HUServiceActionControlsViewControllerDelegate, HUPresentationDelegate;

@interface HUServiceActionControlsViewController : HUItemTableViewController <HUServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost>

@property (retain, nonatomic) HFServiceActionItem *serviceActionItem;
@property (retain, nonatomic) HUControlPanelController *controlPanelController;
@property (retain, nonatomic) UIColor *overrideCellColor;
@property (readonly, nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<HUServiceActionControlsViewControllerDelegate> serviceActionControlsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_done:(id)a0;
- (id)initWithServiceActionItem:(id)a0 mode:(unsigned long long)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)diffableDataItemManager:(id)a0 willUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3 isInitialLoad:(BOOL)a4;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (BOOL)itemManager:(id)a0 shouldShowControlPanelItem:(id)a1;
- (BOOL)itemManager:(id)a0 shouldShowSectionTitleForControlPanelItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
