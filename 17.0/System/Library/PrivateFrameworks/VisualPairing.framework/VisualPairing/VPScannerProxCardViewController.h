@class VPScannerView;

@interface VPScannerProxCardViewController : UIViewController

@property (retain, nonatomic) VPScannerView *scannerView;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;

- (void)start;
- (void)viewDidLoad;
- (void)stop;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
