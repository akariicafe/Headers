@class NSString;
@protocol DSNavigationDelegate;

@interface DSRestrictionsController : OBTextWelcomeController <DSController>

@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)restrictionList;
- (void)learnMoreRestrictionsPressed;
- (void)shouldShowWithCompletion:(id /* block */)a0;

@end
