@class NSString;

@interface DKPasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>

@property (nonatomic) int simplePasscodeType;
@property (copy, nonatomic) id /* block */ verifyPasscode;
@property (copy, nonatomic) id /* block */ passcodeVerified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)passcodeViewController:(id)a0 shouldEnableCompletionButtonForPasscode:(id)a1;
- (id)completionButtonTitleForPasscodeViewController:(id)a0;
- (void)passcodeViewController:(id)a0 didEnterPasscode:(id)a1;
- (void)setUnlockScreenType:(int)a0 simplePasscodeType:(int)a1;

@end
