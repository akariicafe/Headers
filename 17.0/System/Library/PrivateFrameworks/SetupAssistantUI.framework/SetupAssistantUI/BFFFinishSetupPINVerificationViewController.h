@class NSString;

@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (id)stringsBundle;

@end
