@class UIColor, NSMutableDictionary, GKHostedViewController, NSString;

@interface GKRemoteViewServiceController : _UIRemoteViewController <GKExtensionHostProtocol>

@property (retain, nonatomic) NSMutableDictionary *dirtyProperties;
@property (weak, nonatomic) GKHostedViewController *managingViewController;
@property (retain, nonatomic) UIColor *previousStatusBarColor;
@property (copy, nonatomic) id /* block */ blockToPerformAfterViewDidAppear;
@property (nonatomic) BOOL didSetRemoteGame;
@property (nonatomic) BOOL viewDidAppear;
@property (readonly, nonatomic) BOOL serviceNeedsLocalPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setupRemoteView;
- (long long)_desiredStatusBarStyle;
- (BOOL)_dismissSelfAfterGettingShouldCancel;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)a0;
- (void)messageFromExtension:(id)a0;
- (void)nudge;
- (id)observedKeyPaths;
- (void)populateInitialStateForRemoteView:(id)a0;
- (void)readyToPresentInController:(id)a0;
- (BOOL)serviceNeedsFriendCode;

@end
