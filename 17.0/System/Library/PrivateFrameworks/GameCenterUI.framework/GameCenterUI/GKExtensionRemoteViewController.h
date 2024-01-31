@class NSString, NSExtension;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)initialItemsForExtension;
+ (void)setupCallbackBlocksForExtension:(id)a0 withParentViewController:(id)a1;
+ (void)viewControllerForExtension:(id)a0 inputItems:(id)a1 completionHandler:(id /* block */)a2;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelExtension;
- (long long)_desiredStatusBarStyle;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (id)extensionObjectProxy;
- (void)hostApp:(id)a0 grantingAccessExtensionSandbox:(id)a1 replyWithEndpoint:(id /* block */)a2;
- (void)messageFromClient:(id)a0;
- (void)messageFromExtension:(id)a0;
- (void)sendMessageToExtension:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)tearDownExtensionWithReply:(id /* block */)a0;

@end
