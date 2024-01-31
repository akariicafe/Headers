@class NSTimer, NSString, PBFApplicationStateMonitor, UINavigationController, NSSet, PBFPosterGalleryDataProvider, PBFPosterGalleryPreviewView, NSMutableSet, _PBFGalleryCollectionViewController, PBFGalleryEditingSceneViewController;
@protocol PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate;

@interface PBFPosterGalleryPreviewViewController : UIViewController <UISheetPresentationControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, _PBFGalleryCollectionViewControllerDelegate> {
    struct CGSize { double width; double height; } _environmentContainerContentSize;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _environmentContainerContentInsets;
    struct { struct CGSize { double width; double height; } itemSizeForType[4]; unsigned long long maximumNumberOfHorizontalItems[4]; struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionContentInsets[4]; double standardSpacing; double groupSpacing; } _metrics;
    _PBFGalleryCollectionViewController *_collectionViewController;
    UINavigationController *_navigationController;
    NSMutableSet *_displayedPreviewIdentifiers;
    NSMutableSet *_tappedPreviewIdentifiers;
    NSString *_currentlyEditingPreviewIdentifier;
    NSString *_addedPreviewIdentifier;
}

@property (nonatomic, getter=isPresentingPreview) BOOL presentingPreview;
@property (retain, nonatomic) PBFGalleryEditingSceneViewController *loadingHeroEditingSceneViewController;
@property (retain, nonatomic) NSTimer *loadingHeroActivityIndicationTimer;
@property (retain, nonatomic) PBFPosterGalleryPreviewView *loadingHeroPreviewView;
@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider;
@property (retain, nonatomic) PBFApplicationStateMonitor *applicationStateMonitor;
@property (weak, nonatomic) id<PBFPosterGalleryPreviewViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PREditingSceneViewControllerDelegate> editingSceneDelegate;
@property (readonly, copy, nonatomic) NSSet *displayedPreviewIdentifiers;
@property (readonly, copy, nonatomic) NSSet *tappedPreviewIdentifiers;
@property (readonly, copy, nonatomic) NSString *addedPreviewIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureSheetPresentationController:(id)a0;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (long long)layoutOrientation;
- (void)dealloc;
- (void)viewDidLoad;
- (void)presentationControllerWillDismiss:(id)a0;
- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)a0;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)a0;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (id)galleryCollectionViewController;
- (id)_layoutSectionForSection:(long long)a0 environment:(id)a1 galleryViewSpec:(id)a2;
- (void)_updatePreferredContentSizeForOrientation:(long long)a0;
- (void)galleryCollectionViewControllerDidSelectPreview:(id)a0 fromPreviewView:(id)a1;
- (void)galleryCollectionViewControllerWillDisplayPreview:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0[4]; unsigned long long x1[4]; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2[4]; double x3; double x4; })metricsForEnvironment:(id)a0;
- (id)navigationControllerForPresentingSceneViewController:(id)a0;
- (void)presentConfiguratorForPreview:(id)a0 fromView:(id)a1;
- (void)presentPreview:(id)a0 withMode:(long long)a1 fromView:(id)a2;
- (void)presentRendererForPreview:(id)a0 fromView:(id)a1;
- (void)updatePreferredContentSizeForSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
