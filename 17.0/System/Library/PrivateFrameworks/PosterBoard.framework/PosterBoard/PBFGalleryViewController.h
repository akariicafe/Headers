@class UIBarButtonItem, NSString, UIAction, PBFPosterGalleryPreviewViewController, PBFGalleryMutableDataProvider, PBFPosterExtensionDataStoreXPCServiceGlue;
@protocol BSInvalidatable;

@interface PBFGalleryViewController : UIViewController <PBFPosterExtensionDataStoreObserver, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerDelegate> {
    PBFPosterGalleryPreviewViewController *_previewViewController;
    PBFPosterExtensionDataStoreXPCServiceGlue *_glue;
    PBFGalleryMutableDataProvider *_dataProvider;
    UIAction *_renderingAction;
    UIAction *_previewingAction;
    UIAction *_editingAction;
    UIBarButtonItem *_environmentItem;
    id<BSInvalidatable> _inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_reload;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)_fetchNewGalleryFromProactive:(unsigned long long)a0;
- (void)_reloadGalleryUsingProactive:(id)a0;
- (void)_selectEditingEnvironment;
- (void)_selectPreviewingEnvironment;
- (void)_selectRenderingEnvironment;
- (void)_setupDataProvider;
- (void)galleryViewController:(id)a0 didSelectPreview:(id)a1 fromPreviewView:(id)a2;
- (void)galleryViewController:(id)a0 willDisplayPreview:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didUpdateGalleryConfiguration:(id)a1;

@end
