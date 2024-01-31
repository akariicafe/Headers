@class ACAccount;

@interface AAUICDPWalrusStatusUpdateHook : AAUICDPStatusUpdateHook {
    ACAccount *_account;
}

- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)a0;
- (id)additionalPayloadForAction:(id)a0 error:(id)a1;
- (id)changeControllerForAction:(id)a0;
- (void)postCompletionProcessingForAction:(id)a0 error:(id)a1;

@end
