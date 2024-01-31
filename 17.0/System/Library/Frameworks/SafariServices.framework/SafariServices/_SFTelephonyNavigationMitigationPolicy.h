@class NSDate;
@protocol SFDialogPresenting;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject {
    long long _classification;
    NSDate *_dateUserLastDeclined;
}

@property (weak, nonatomic) id<SFDialogPresenting> dialogPresenter;

+ (double)test_suspiciousClassificationExpirationDuration;

- (void).cxx_destruct;
- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)_handleInput:(long long)a0;
- (void)handleNavigationToURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)policyAppliesToURL:(id)a0;
- (void)userAcceptedCallPrompt;
- (void)userDeclinedCallPrompt;

@end
