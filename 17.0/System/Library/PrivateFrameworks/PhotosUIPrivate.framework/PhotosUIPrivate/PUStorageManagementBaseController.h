@class PSRootController, NSString, PSSpecifier, PHPhotoLibrary, UIViewController;
@protocol PSController;

@interface PUStorageManagementBaseController : UIViewController <PXGridPresentationBarsUpdateDelegate, PSController> {
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (nonatomic) BOOL isGridControllerEditing;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)rootController;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)viewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)a0;
- (id)photosViewConfigurationWithShouldExpunge:(BOOL)a0;

@end
