@class NSString, UIPageViewController;
@protocol VideosExtrasImageBrowserViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasImageBrowserViewControllerDataSource;

@interface VideosExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>

@property (retain, nonatomic) UIPageViewController *pageViewController;
@property (weak, nonatomic) id<VideosExtrasImageBrowserViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<VideosExtrasImageBrowserViewControllerDelegate> delegate;
@property (weak, nonatomic) id<VideosExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource;
@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;
@property (nonatomic) unsigned long long visibleImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (unsigned long long)_numberOfImages;
- (void)_addPageViewForController:(id)a0 toView:(id)a1;
- (id)_imageViewControllerAtIndex:(unsigned long long)a0;
- (void)_removePageViewController;
- (void)_updatePageViewController;
- (id)_visibleImageViewController;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;

@end
