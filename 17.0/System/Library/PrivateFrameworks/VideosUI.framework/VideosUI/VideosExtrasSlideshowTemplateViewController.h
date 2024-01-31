@class VideosExtrasSlideshowViewController, NSArray, IKSlideshowElement, NSString, UITapGestureRecognizer;

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant> {
    BOOL _overlayHidden;
    BOOL _preventNavbarAutohide;
}

@property (retain, nonatomic) NSArray *imageElements;
@property (retain, nonatomic) VideosExtrasSlideshowViewController *slideshowViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) IKSlideshowElement *templateElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)_handleTap:(id)a0;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)showsPlaceholder;
- (void)slideshowViewController:(id)a0 loadImageAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_firstImageLoadedHideNavigationBar;
- (void)_toggleVisibilityOfNavigationBar;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)a0 toImageAtIndex:(unsigned long long)a1;

@end
