@class PBFPosterSnapshotDefinition;
@protocol _PBFPosterSceneSnapshotViewControllerDelegate, PBFPosterPreview, PRSPosterExtensionDescribing, PBFDisplayContext;

@interface _PBFPosterSceneSnapshotViewController : PRRenderingSceneViewController

@property (nonatomic) long long state;
@property (weak, nonatomic) id<_PBFPosterSceneSnapshotViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<PRSPosterExtensionDescribing> extension;
@property (readonly, nonatomic) id<PBFPosterPreview> preview;
@property (readonly, nonatomic) PBFPosterSnapshotDefinition *definition;
@property (retain, nonatomic) id<PBFDisplayContext> displayContext;
@property (nonatomic) BOOL scenePresenterIsValid;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_teardown;
- (void)_configureInitialSceneSettings:(id)a0;
- (void)_sceneContentReadinessDidChange;
- (void)_failWithFatalError:(id)a0;
- (void)_updateSceneSettings:(id)a0 transitionContext:(id)a1;
- (void)_myUpdateSettings:(id)a0;
- (id)initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2 configuredProperties:(id)a3 preview:(id)a4 definition:(id)a5;

@end
