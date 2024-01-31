@class RBSAssertion, NSString, PBFPosterSnapshotDefinition, UIView, _PBFPosterSceneSnapshotViewController;
@protocol PBFPosterPreview, PBFGalleryPosterViewControllerDelegate, PRSPosterExtensionDescribing, PBFDisplayContext;

@interface PBFGalleryPosterViewController : UIViewController <_PBFPosterSceneSnapshotViewControllerDelegate, BSInvalidatable> {
    _PBFPosterSceneSnapshotViewController *_sceneViewController;
    UIView *_transformView;
    RBSAssertion *_posterRuntimeAssertion;
    BOOL _isInvalidated;
}

@property (weak, nonatomic) id<PBFGalleryPosterViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<PRSPosterExtensionDescribing> extension;
@property (readonly, nonatomic) id<PBFPosterPreview> preview;
@property (readonly, nonatomic) PBFPosterSnapshotDefinition *definition;
@property (retain, nonatomic) id<PBFDisplayContext> displayContext;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_setupSceneViewController;
- (void)_updateSceneViewController;
- (id)initWithExtension:(id)a0 preview:(id)a1 definition:(id)a2;
- (void)sceneSnapshotViewController:(id)a0 stateChangedTo:(long long)a1;
- (void)sceneSnapshotViewController:(id)a0 stateWillChangeFrom:(long long)a1 to:(long long)a2;

@end
