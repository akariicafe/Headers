@class OBBoldTrayButton, OBLinkTrayButton, NSString;
@protocol DSNavigationDelegate;

@interface DSPrivateRelayController : DSOBWelcomeController <DSController>

@property (retain, nonatomic) OBBoldTrayButton *enableButton;
@property (retain, nonatomic) OBLinkTrayButton *linkButton;
@property (nonatomic) unsigned long long proxyServiceStatus;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)enableButtonTitle;
- (void)learnMorePressed;
- (id)privateRelayDetailText;
- (void)setPrivateRelayEnabledWithHandler:(id /* block */)a0;
- (void)shouldShowWithCompletion:(id /* block */)a0;
- (void)turnOnPrivateRelay;

@end
