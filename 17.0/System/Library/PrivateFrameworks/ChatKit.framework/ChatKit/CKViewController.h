@interface CKViewController : UIViewController

@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL deferredAppeared;
@property (nonatomic) BOOL appearing;
@property (nonatomic) BOOL dissapearing;

- (void)viewWillAppear:(BOOL)a0;
- (void)significantTimeChange;
- (void)viewWillDisappear:(BOOL)a0;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)parentControllerDidBecomeActive;
- (void)childViewControllersPerform:(SEL)a0;
- (void)parentControllerDidResume:(BOOL)a0 animating:(BOOL)a1;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)viewDidAppearDeferredSetup;

@end
