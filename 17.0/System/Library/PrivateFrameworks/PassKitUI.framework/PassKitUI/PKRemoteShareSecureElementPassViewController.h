@class NSString, PKPassShareInitiationNavigationController;

@interface PKRemoteShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate, PKRemoteShareSecureElementPassViewControllerProtocol> {
    PKPassShareInitiationNavigationController *_shareNavigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidLoad;
- (void)loadView;
- (void)_setRootViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)didCreateShareURL:(id)a0 activationCode:(id)a1 error:(id)a2;
- (void)didFinishShareWithDidUserShare:(BOOL)a0 error:(id)a1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)setPass:(id)a0 environment:(unsigned long long)a1 isFromPeopleScreen:(BOOL)a2 completion:(id /* block */)a3;
- (void)setShouldPromptUserToShare:(BOOL)a0;

@end
