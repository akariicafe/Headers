@class OBBoldTrayButton, NSString;
@protocol DSNavigationDelegate;

@interface DSPrivacyAdditionalActionsController : DSOBWelcomeController <DSController>

@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)back;
- (void)pushNextPane;

@end
