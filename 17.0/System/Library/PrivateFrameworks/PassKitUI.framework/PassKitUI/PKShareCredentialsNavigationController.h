@class NSString;

@interface PKShareCredentialsNavigationController : PKNavigationController <PKServiceAddSecureElementPassViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)setConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
