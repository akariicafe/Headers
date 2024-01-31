@class UIPageControl, NSString, UIPageViewController, NSMutableArray;
@protocol CKSyndicationOnboardingPageViewControllerDelegate;

@interface CKSyndicationPageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *pageContent;
@property (nonatomic) double buttonTrayHeight;
@property (retain, nonatomic) UIPageViewController *pageViewController;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) id<CKSyndicationOnboardingPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)indexOfViewController:(id)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)pageControlChanged:(id)a0;
- (void)createContentPages;
- (id)viewControllerAtIndex:(unsigned long long)a0;

@end
