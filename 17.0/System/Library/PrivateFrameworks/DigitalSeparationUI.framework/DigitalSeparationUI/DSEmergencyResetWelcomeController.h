@class NSString;
@protocol DSNavigationDelegate;

@interface DSEmergencyResetWelcomeController : DSOBWelcomeController <DSController>

@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
