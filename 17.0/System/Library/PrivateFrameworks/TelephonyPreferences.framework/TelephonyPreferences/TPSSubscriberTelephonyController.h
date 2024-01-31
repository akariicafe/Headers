@class NSString, CTXPCServiceSubscriptionContext;

@interface TPSSubscriberTelephonyController : TPSTelephonyController <CoreTelephonyClientSubscriberDelegate>

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, getter=isSIMPasscodeLockEnabled) BOOL SIMPasscodeLockEnabled;
@property (nonatomic) long long SIMPasscodeRemainingAttempts;
@property (copy, nonatomic) NSString *SIMStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)simLockSaveRequestDidComplete:(id)a0 success:(BOOL)a1;
- (void)simPinChangeRequestDidComplete:(id)a0 success:(BOOL)a1;
- (void)simPinEntryErrorDidOccur:(id)a0 status:(id)a1;
- (void)simPukEntryErrorDidOccur:(id)a0 status:(id)a1;
- (void)changePIN:(id)a0 newPin:(id)a1;
- (void)changePIN:(id)a0 newPin:(id)a1 completion:(id /* block */)a2;
- (void)fetchSIMPasscodeLockEnabled;
- (void)fetchSIMPasscodeLockEnabledWithCompletion:(id /* block */)a0;
- (void)fetchSIMPasscodeRemainingAttempts;
- (void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(id /* block */)a0;
- (void)fetchSIMStatus;
- (void)fetchSIMStatusWithCompletion:(id /* block */)a0;
- (id)getSIMPasscodeLockEnabledValue;
- (id)getSIMPasscodeLockEnabledValueWithError:(id *)a0;
- (id)getSIMPasscodeRemainingAttemptsValue;
- (id)getSIMPasscodeRemainingAttemptsValueWithError:(id *)a0;
- (id)getSIMStatus;
- (id)getSIMStatusWithError:(id *)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (void)presentSIMPasscodeAlert;
- (void)setSIMLockEnabled:(BOOL)a0 pin:(id)a1;
- (void)setSIMLockEnabled:(BOOL)a0 pin:(id)a1 completion:(id /* block */)a2;

@end
