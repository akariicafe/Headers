@class NSString;

@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject <DevicePINControllerDelegate>

@property (copy, nonatomic) id /* block */ devicePasscodeVerificationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteAccountGroupFooterText;
+ (id)labelTextForAccountSummaryCell;
+ (id)titleForAccountSummaryGroup;
+ (id)warningTextForAccountDeletion;

- (void)didAcceptEnteredPIN:(id)a0;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (void)preflightsAccountDeletion:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_verifyDevicePasscodeWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;

@end
