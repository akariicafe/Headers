@class PXPlacesMapFetchResultViewController, NSArray, NSString, PXProgrammaticNavigationDestination, UISegmentedControl, PHPhotoLibrary, PXPlacesMapContainerConfiguration;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (nonatomic) unsigned long long previousNavigationBarSegmentedControlSelectedIndex;
@property (retain, nonatomic) UISegmentedControl *subviewControl;
@property (nonatomic) BOOL gridControllerEditing;
@property (nonatomic) long long initialNavigationBarStyle;
@property (readonly, nonatomic) PXPlacesMapContainerConfiguration *configuration;
@property (retain, nonatomic) NSArray *initialLeftBarButtonItems;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)px_navigationDestination;
- (void)_resetNavigationItem;
- (void)_switchToLegacyGridController;
- (void)_switchToMapController;
- (void)_updateNavigationItemTitleWithConfigurationIfPossible;
- (void)_updateShouldOptOutFromChromelessBars;
- (id)initWithPhotoLibrary:(id)a0 configuration:(id)a1;
- (void)legacyStrategyForHandleViewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)setNavigationBarButtons:(id)a0;
- (void)setToolbarButtons:(id)a0;
- (void)subviewControlChanged:(id)a0;
- (void)viewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)a0;

@end
