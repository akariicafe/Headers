@class MRUNowPlayingController, MRUViewServiceRoutingView, MediaControlsEndpointsManager, UITableViewDiffableDataSource, MPMediaControlsConfiguration, NSMutableDictionary, MRUVisualStylingProvider, MRUVendorSpecificDeviceManager, NSString, UIViewController, MRUOutputDeviceRoutingDataSource, MRURoutingViewController;
@protocol MRUViewServiceRoutingViewControllerDelegate;

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) MRUViewServiceRoutingView *view;
@property (retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager;
@property (retain, nonatomic) MRURoutingViewController *routingViewController;
@property (retain, nonatomic) MRUOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingControllers;
@property (retain, nonatomic) MRUNowPlayingController *selectedNowPlayingController;
@property (copy, nonatomic) id /* block */ replaceRoutes;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) BOOL canShowRemoteDevices;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) MRUVendorSpecificDeviceManager *vendorSpecificManager;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (weak, nonatomic) id<MRUViewServiceRoutingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateSelectedViewController;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeArtwork:(id)a2;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)didSelectListState:(id)a0;
- (void)nowPlayingController:(id)a0 didChangeQuickControlItem:(id)a1;
- (void)updateDiscoveryMode;
- (void)updateMoreButtonVisibility;
- (void)loadView;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)updateNowPlayingControllers;
- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (void)nowPlayingController:(id)a0 endpointController:(id)a1 didChangeRoute:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)setState:(long long)a0;
- (void)endpointsManager:(id)a0 defersRoutesReplacement:(id /* block */)a1;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (void).cxx_destruct;
- (void)updateCellForIdentifier:(id)a0;
- (void)endpointsManager:(id)a0 activeSystemRouteDidChange:(id)a1;
- (id)selectedIdentifier;
- (void)didSelectQuickControl:(id)a0;
- (void)routingViewControllerDidUpdateItems:(id)a0;
- (void)routingViewController:(id)a0 didSelectRoutingViewItem:(id)a1;
- (BOOL)canShowMoreButton;
- (void)updateRoutingViewController;
- (void)updateRoutingViewControllerScrollIndicatorInsets;

@end
