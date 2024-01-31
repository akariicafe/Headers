@class PRSPosterConfiguration, NSString, UIImage, PREditingSceneViewController, UIImageView, PRSPosterPath, PRPosterExtensionDefaultDataSource, PRMutablePosterConfiguration;
@protocol PRUISPosterEditingContext, PRUISPosterSnapshotCache, PRSPosterExtensionDescribing, PRUISPosterEditingViewControllerDelegate;

@interface PRUISPosterEditingViewController : UIViewController <PRPosterExtensionProviderObserver, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver> {
    NSString *_role;
}

@property (nonatomic) BOOL hasPreparedForEditing;
@property (readonly, nonatomic) id<PRUISPosterSnapshotCache> snapshotCache;
@property (retain, nonatomic) UIImage *snapshot;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (readonly, copy, nonatomic) PRSPosterPath *path;
@property (retain, nonatomic) PREditingSceneViewController *editingSceneViewController;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (retain, nonatomic) PRPosterExtensionDefaultDataSource *extensionDataSource;
@property (retain, nonatomic) PRMutablePosterConfiguration *temporaryConfiguration;
@property (retain, nonatomic) id<PRSPosterExtensionDescribing> _lock_extension;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (weak, nonatomic) id<PRUISPosterEditingViewControllerDelegate> delegate;
@property (readonly, nonatomic) PRSPosterConfiguration *configuration;
@property (readonly, nonatomic) id<PRUISPosterEditingContext> context;
@property (nonatomic) unsigned long long acceptButtonType;
@property (nonatomic) BOOL showsContentWhenReady;
@property (nonatomic) BOOL prefersDisplayingSnapshotBeforePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_topButtonLayout;
+ (id)posterEditingViewControllerForProvider:(id)a0 role:(id)a1 context:(id)a2 error:(out id *)a3;

- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_commonInit;
- (id)internalContext;
- (id)initWithExistingConfiguration:(id)a0 context:(id)a1;
- (id)initWithExtensionIdentifier:(id)a0 configuration:(id)a1 context:(id)a2;
- (void)presentationDidFinishAnimated:(BOOL)a0;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)a0;
- (void)posterExtensionProvider:(id)a0 foundExtensions:(id)a1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)_prepareForEditing;
- (id)_contentOnlyPosterLevelSet;
- (void)_prepareEditingForNewPoster;
- (void)_prepareEditingForPath:(id)a0;
- (id)contentOnlySnapshot;
- (id)phonePreviewSnapshot;
- (id)snapshotWithOptions:(unsigned long long)a0;
- (void)updateEditingControllerWithContext:(id)a0;

@end
