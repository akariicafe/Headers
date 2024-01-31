@class PKAddPaymentPassRequestConfiguration, NSString, NSArray, PKPaymentWebService;

@interface PKServiceAddPaymentPassViewController : PKNavigationController <PKServiceAddPaymentPassViewControllerProtocol> {
    PKAddPaymentPassRequestConfiguration *_configuration;
    NSArray *_webServices;
    PKPaymentWebService *_managingDeviceWebService;
    BOOL _entitled;
    NSString *_teamID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_cancel;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_applyCancelItem:(id)a0;
- (void)_launchFlowWithFlowManager;
- (void)generateRequestWithCertificateChain:(id)a0 nonce:(id)a1 nonceSignature:(id)a2 completionHandler:(id /* block */)a3;
- (void)setConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
