@class CPSTemplateEnvironment, NSString, CPTemplate, NAFuture, UITapGestureRecognizer;
@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPSTemplateEnvironmentDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable>

@property (nonatomic) BOOL isPopping;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) BOOL isNowPlayingApp;
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (weak, nonatomic) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NAFuture *templateProviderFuture;

- (void)_cleanup;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)_barButtonItemForIdentifier:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceivePress:(id)a1;
- (void)viewDidLoad;
- (void)invalidate;
- (void)removeFromParentViewController;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (void)didSelectButton:(id)a0;
- (void)_updateTrailingBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (void)setBarButton:(id)a0 image:(id)a1;
- (void)setBarButton:(id)a0 title:(id)a1;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (void)setControl:(id)a0 selected:(BOOL)a1;
- (void)setHostBackButton:(id)a0;
- (void)_addGestureRecognizerIfNecessary;
- (void)_backGestureFired:(id)a0;
- (id)_barButtonItemForBarButton:(id)a0;
- (void)_cps_viewControllerWasPopped;
- (void)_dismissTemplateViewController;
- (id)_nowPlayingBarButtonItem;
- (void)_nowPlayingButtonTapped:(id)a0;
- (void)_updateLeadingBarButtons;
- (void)_updateTemplate:(id)a0;
- (void)_viewDidLoad;
- (BOOL)_wantsNowPlayingButton;
- (void)applicationDidBecomeNowPlayingApp:(BOOL)a0;
- (id)initWithTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;

@end
