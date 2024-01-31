@class NSString, NSArray, NSDictionary, VideosExtrasCarouselViewController, IKShowcaseTemplate, VideosExtrasZoomingImageTransitionController, VideosExtrasImageBrowserViewController;

@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>

@property (retain, nonatomic) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController;
@property (retain, nonatomic) NSArray *bannerButtonElements;
@property (retain, nonatomic) NSArray *carouselLockupElements;
@property (retain, nonatomic) VideosExtrasCarouselViewController *carouselViewController;
@property (retain, nonatomic) VideosExtrasImageBrowserViewController *imageBrowserViewController;
@property (retain, nonatomic) NSDictionary *overriddenFullscreenImages;
@property (nonatomic) BOOL supportsOneupMode;
@property (nonatomic) unsigned long long autohighlightIndex;
@property (readonly, nonatomic) IKShowcaseTemplate *templateElement;
@property (readonly, nonatomic) unsigned long long indexOfVisibleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareLayout;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)showsPlaceholder;
- (void)_loadTextElement:(id)a0 textAttributes:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_mainChildViewController;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)a0;
- (id)animationControllerForNavigationOperation:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (unsigned long long)carouselSize;
- (void)carouselViewController:(id)a0 configureCarouselCollectionViewCell:(id)a1 forItemAtIndex:(unsigned long long)a2 withThumbnailImageContainerSize:(struct CGSize { double x0; double x1; })a3;
- (void)carouselViewController:(id)a0 didHighlightItemAtIndex:(unsigned long long)a1;
- (void)carouselViewController:(id)a0 didSelectItemAtIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)a0;
- (void)imageBrowserViewController:(id)a0 loadDescriptionAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)imageBrowserViewController:(id)a0 loadImageAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)imageBrowserViewController:(id)a0 loadSubtitleAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)imageBrowserViewController:(id)a0 loadTitleAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)a0;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;

@end
