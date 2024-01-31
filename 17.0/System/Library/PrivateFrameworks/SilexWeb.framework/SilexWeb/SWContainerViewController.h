@class SWContainerConfiguration, NSURL, SWDeveloperSettings, SWViewController;
@protocol UICoordinateSpace, SWMessageHandlerManager, SWConfigurationManager, SWInteractionProvider, SWPresentationManager, SWActionProvider, SWErrorProvider, SWSnapshotManager, SWScaleManager;

@interface SWContainerViewController : UIViewController

@property (readonly, nonatomic) SWViewController *webContentViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (retain, nonatomic) id<UICoordinateSpace> keyboardCoordinateSpace;
@property (nonatomic) BOOL isKeyboardVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputAccessoryViewFrame;
@property (nonatomic) BOOL isTransitioning;
@property (readonly, nonatomic) id<SWActionProvider> actionProvider;
@property (readonly, nonatomic) id<SWInteractionProvider> interactionProvider;
@property (readonly, nonatomic) id<SWErrorProvider> errorProvider;
@property (readonly, nonatomic) id<SWConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<SWPresentationManager> presentationManager;
@property (retain, nonatomic) SWDeveloperSettings *developerSettings;
@property (readonly, nonatomic) id<SWScaleManager> scaleManager;
@property (readonly, nonatomic) id<SWSnapshotManager> snapshotManager;
@property (readonly, nonatomic) NSURL *loadedURL;
@property (nonatomic) BOOL focusShouldStartInputSession;
@property (copy, nonatomic) SWContainerConfiguration *configuration;
@property (readonly, nonatomic) id<SWMessageHandlerManager> messageHandlerManager;

- (void)setInputAccessoryView:(id)a0;
- (void)prewarm;
- (void)updateConfiguration;
- (id)inputAccessoryView;
- (void)loadURL:(id)a0;
- (void)setTextInputTraits:(id)a0;
- (id)accessibilityElements;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)loadHTMLString:(id)a0 baseURL:(id)a1;
- (void)loadLocalDatastore:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeMenusForIdentifiers:(id)a0;
- (void)setShortcutsBarWithLeadingGroups:(id)a0 trailingGroups:(id)a1;
- (BOOL)allowUserInteractionForInteractionType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertedInputAccessoryViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertedKeyboardFrame;
- (void)handleKeyboardChange:(id)a0;
- (void)handleKeyboardHide:(id)a0;
- (void)handleKeyboardShow:(id)a0;
- (id)initWithWebContentViewController:(id)a0 actionProvider:(id)a1 interactionProvider:(id)a2 errorProvider:(id)a3 configurationManager:(id)a4 presentationManager:(id)a5 scaleManager:(id)a6 snapshotManager:(id)a7;

@end
