@interface HUContainedSpeakersViewController : HUItemTableViewController <HUDetailsPresentationDelegateHost, HUPresentationDelegate>

@property (nonatomic) void /* unknown type, empty encoding */ requiresPresentingViewControllerDismissal;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationDelegate;

- (void)editWithSender:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithMediaItem:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)contentConfigurationForHeaderViewAtSectionIndex:(long long)a0;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)itemManagerDidUpdate:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;

@end
