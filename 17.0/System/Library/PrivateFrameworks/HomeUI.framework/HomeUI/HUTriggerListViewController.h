@class HUNavigationBarButton, NSString, HUTriggerListItemManager, HUGridLayoutOptions;

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUColoredButtonCellDelegate, HUNavigationBarButtonOwner, HUTriggerEditorDelegate, HUTriggerListSubheadlineCellDelegate>

@property (retain, nonatomic) HUNavigationBarButton *navigationAddButton;
@property (readonly, nonatomic) HUTriggerListItemManager *triggerItemManager;
@property (nonatomic) unsigned long long editorPresentationMode;
@property (nonatomic) BOOL isTransitioningSizes;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldIncludeRoomsInHomeMenu;

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_addTrigger:(id)a0;
- (id)_deleteItem:(id)a0;
- (void)_showSummaryForTriggerItem:(id)a0;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (id)addActionDelegateForNavigationBarButton:(id)a0;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (void)coloredButtonCellPressed:(id)a0;
- (id)homeForNavigationBarButton:(id)a0;
- (void)learnMoreLinkTapped:(id)a0;
- (id)roomForNavigationBarButton:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)showAddTriggerView;
- (id)trailingSwipeActionsForItem:(id)a0;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
