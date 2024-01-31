@interface OBBaseWelcomeController : UIViewController

@property (nonatomic) unsigned long long templateType;

+ (struct CGSize { double x0; double x1; })preferredContentSize;
+ (struct CGSize { double x0; double x1; })_preferredContentSizeInBuddy:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })preferredContentSizeInSetupAssistant;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMargins;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)navigationItem;
- (void)_applyChromelessToBar:(long long)a0 navigationItem:(id)a1;
- (void)_presentationStyleValidationCheck;
- (double)autoScrollEdgeTransitionDistance;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insetsForTemplateType:(unsigned long long)a0;
- (long long)navigationBarScrollToEdgeBehavior;
- (void)updateDirectionalLayoutMargins;

@end
