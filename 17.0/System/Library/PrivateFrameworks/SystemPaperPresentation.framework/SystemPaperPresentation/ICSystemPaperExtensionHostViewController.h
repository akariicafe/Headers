@class NSString, NSXPCConnection, NSData, _UIRemoteViewController;
@protocol ICSystemPaperPresentationDelegate;

@interface ICSystemPaperExtensionHostViewController : _EXHostViewController <_EXHostViewControllerDelegate, ICSystemPaperExtensionHost, _UIRemoteViewControllerContaining>

@property (copy, nonatomic) NSData *userActivityData;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ startHostingBlock;
@property (weak, nonatomic) id<ICSystemPaperPresentationDelegate> presentationDelegate;
@property (nonatomic) BOOL didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)teardown;
- (id)initWithConfiguration:(id)a0;
- (void)addChildViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (oneway void)openURL:(id)a0 completion:(id /* block */)a1;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (oneway void)dismissViewControllerCancelled:(BOOL)a0;
- (void)_finishAndNotifyDelegateWithError:(id)a0;
- (void)_invokeAndReleaseStartHostingBlock;

@end
