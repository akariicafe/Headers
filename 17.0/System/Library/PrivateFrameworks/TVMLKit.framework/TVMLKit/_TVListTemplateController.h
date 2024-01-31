@class _TVListViewController, NSString, IKViewElement, UIView, _TVFocusCaptureView, IKCollectionElement, IKAudioElement, IKImageElement, UIViewController;

@interface _TVListTemplateController : _TVBgImageLoadingViewController <_TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable> {
    IKViewElement *_templateElement;
    IKCollectionElement *_listElement;
    IKViewElement *_bannerElement;
    IKImageElement *_bgImageElement;
    IKAudioElement *_bgAudioElement;
    IKImageElement *_heroImageElement;
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
}

@property (retain, nonatomic) UIViewController *focusedController;
@property (retain, nonatomic) _TVListViewController *listViewController;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (long long)_blurEffectStyle;
- (void)_updateView;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_backgroundImageProxy;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgElement:(id)a0;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)_configureWithListElement:(id)a0;
- (id)_listTemplateView;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)listViewController:(id)a0 didScrollWithScrollView:(id)a1;
- (void)listViewController:(id)a0 updatePreviewViewController:(id)a1;
- (BOOL)setNeedsFocusUpdateToList;
- (void)updateWithViewElement:(id)a0;

@end
