@class NSString, UIVisualEffectView, UIViewController;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController>

@property (retain, nonatomic) UIVisualEffectView *pocketBackgroundView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIViewController *pocketViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithContentViewController:(id)a0;
- (id)_tearDownPocket;
- (void)_installContentViewController;
- (id)_installPocket;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)a0 pocketViewController:(id)a1;

@end
