@class OBLinkTrayButton, NSArray, NSString, UIActivityIndicatorView, WLQRCodeProvider;

@interface WLQRCodeDefaultViewController : WLQRCodeViewController <WLQRCodeProviderDelegate> {
    BOOL _useGooglePlayStore;
    OBLinkTrayButton *_continueButton;
    UIActivityIndicatorView *_indicatorView;
    WLQRCodeProvider *_provider;
}

@property (retain, nonatomic) NSArray *codes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_listButtonTapped:(id)a0;
- (id)initWithDefaultQRCode;
- (void)providerDidProvide:(id)a0;
- (void)pushListViewController;
- (void)requestCodes;
- (void)setIndicatorHidden:(BOOL)a0;

@end
