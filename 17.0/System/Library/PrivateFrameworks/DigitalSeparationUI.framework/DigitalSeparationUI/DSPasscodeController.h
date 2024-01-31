@class OBBoldTrayButton, OBLinkTrayButton, NSString;
@protocol DSNavigationDelegate;

@interface DSPasscodeController : DSOBWelcomeController <DSController>

@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (retain, nonatomic) OBLinkTrayButton *linkButton;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPasscodeSet;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)detailText;
- (void).cxx_destruct;
- (void)configureViews;
- (void)displayPasscodeChangeSheet;
- (void)shouldShowWithCompletion:(id /* block */)a0;
- (void)userDidTapCancelButton:(id)a0;

@end
