@class NSString, NSArray, IKViewElement, UIPageViewController;

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource> {
    IKViewElement *_backgroundElement;
    NSArray *_bezelViewControllers;
    IKViewElement *_collectionListElement;
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    IKViewElement *_viewElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)_tapAction:(id)a0;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (BOOL)_updateWithCollectionListElement:(id)a0;
- (id)_viewControllerWithElement:(id)a0 existingController:(id)a1;
- (void)updateWithViewElement:(id)a0;

@end
