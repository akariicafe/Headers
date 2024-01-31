@class UIViewController, NAFuture, NSString, UIBarButtonItem;
@protocol HUConfigurationContentViewController, HUConfigurationViewControllerDelegate;

@interface HUConfigurationWrapperViewController : UIViewController <HUPreloadableViewController, HUConfigurationViewController, HUConfigurationContentViewControllerDelegate>

@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) UIViewController<HUConfigurationContentViewController> *protocolConformingContentViewController;
@property (retain, nonatomic) NAFuture *finishFuture;
@property (retain, nonatomic) UIBarButtonItem *backButtonItem;
@property (retain, nonatomic) UIBarButtonItem *nextButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)title;
- (id)initWithContentViewController:(id)a0;
- (void)_updateNextButton;
- (void)contentViewControllerDidUpdate:(id)a0;
- (void)_backAction:(id)a0;
- (BOOL)_canGoNext;
- (void)_nextAction:(id)a0;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)a0 configurationDelegate:(id)a1;

@end
