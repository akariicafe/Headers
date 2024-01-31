@class TVTemplateFeaturesManager, _TVSwipeUpMessageView, IKDocumentServiceRequest, TVMediaInfo, TVObservableEventController, NSString, TVMediaPlaybackManager, IKUpdateServiceRequest, UIImage, UIViewController;
@protocol TVMediaController, TVShowcasing, TVMediaProviding;

@interface _TVAppDocumentRequestController : _TVAppDocumentController <IKDocumentServiceRequestDelegate, TVTemplateFeaturesManagerDelegate, TVMediaControllerDelegate, TVMediaPlaying, IKServiceRequestDelegate, TVMediaControllerHosting, TVObserving, TVMediaPlaybackManagerDelegate> {
    struct { BOOL initialRequestSent; BOOL shouldHideUI; } _flags;
    struct { BOOL hasSelectedMediaInfoDidChange; BOOL hasDidHideUI; BOOL hasShowcaseFactorDidChange; BOOL hasDidCompleteDocumentCreation; } _adrcDelegateFlags;
}

@property (readonly, nonatomic) TVTemplateFeaturesManager *featuresManager;
@property (retain, nonatomic) TVMediaPlaybackManager *mediaPlaybackManager;
@property (weak, nonatomic) id<TVShowcasing> showcasingController;
@property (weak, nonatomic) id<TVMediaProviding> mediaProvider;
@property (retain, nonatomic) _TVSwipeUpMessageView *swipeUpMessageView;
@property (retain, nonatomic) TVObservableEventController *observableEventController;
@property (retain, nonatomic) IKUpdateServiceRequest *updateServiceRequest;
@property (readonly, nonatomic) IKDocumentServiceRequest *documentServiceRequest;
@property (retain, nonatomic) UIViewController<TVMediaController> *mediaController;
@property (readonly, nonatomic) TVMediaInfo *selectedMediaInfo;
@property (readonly, nonatomic) double showcaseFactor;
@property (readonly, nonatomic) BOOL isUIHidden;
@property (nonatomic) double showcaseInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIImage *coverImage;
@property (readonly, nonatomic) BOOL isPlaying;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setAppDelegate:(id)a0;
- (void)documentDidChangeForDocumentServiceRequest:(id)a0;
- (void)serviceRequest:(id)a0 didCompleteWithStatus:(long long)a1 errorDictionary:(id)a2;
- (id)initWithDocumentServiceRequest:(id)a0;
- (void)_updateMediaInfo;
- (id)customAnimatorForNavigationControllerOperation:(long long)a0 fromViewController:(id)a1;
- (id)customAnimatorForNavigationControllerOperation:(long long)a0 toViewController:(id)a1;
- (void)didCompleteDocumentCreationWithStatus:(long long)a0 errorDictionary:(id)a1;
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)a0;
- (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 viewElement:(id)a2 extraInfo:(id *)a3;
- (id)initWithDocumentServiceRequest:(id)a0 loadImmediately:(BOOL)a1;
- (void)mediaPlaybackManager:(id)a0 shouldHideUI:(BOOL)a1 animated:(BOOL)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
- (void)stateDidChangeForMediaController:(id)a0;
- (void)_hostMediaControllerIfPossible;
- (id)_hostingFocusEnvironment;
- (void)_updateShowcaseFactor;
- (void)addObserver:(id)a0 forEvent:(id)a1;
- (void)adoptMediaController:(id)a0;
- (BOOL)automaticallyProvidesMediaController;
- (void)coverImageDidChangeForMediaController:(id)a0;
- (void)didChangeDocumentContext;
- (void)featuresManager:(id)a0 currentContextDidChangeForFeature:(id)a1;
- (void)handleEvent:(id)a0 sender:(id)a1 withUserInfo:(id)a2;
- (id)initWithAppDocument:(id)a0;
- (id)interactionPreviewControllerForViewController:(id)a0 presentingView:(id)a1 presentingElement:(id)a2;
- (void)mediaInfoDidChange;
- (id)relinquishOwnership;
- (void)removeObserver:(id)a0 forEvent:(id)a1;
- (void)sendInitialRequestIfNeeded;
- (void)shouldHideSupplementaryUI:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)showcaseFactorDidChange;
- (id)tv_featuresManagerForDocument:(id)a0;
- (BOOL)tv_handleEventForDocument:(id)a0 eventName:(id)a1 targetResponder:(id)a2 viewElement:(id)a3 extraInfo:(id *)a4;
- (id)tv_interactionPreviewControllerForViewController:(id)a0 presentingView:(id)a1 presentingElement:(id)a2;
- (void)willHostTemplateViewController:(id)a0 usesTransitions:(BOOL *)a1;

@end
