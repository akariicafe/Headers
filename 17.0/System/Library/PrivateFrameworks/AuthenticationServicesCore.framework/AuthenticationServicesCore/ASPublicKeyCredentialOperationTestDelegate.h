@class NSString;

@interface ASPublicKeyCredentialOperationTestDelegate : NSObject <ASPublicKeyCredentialManagerDelegate>

@property (copy, nonatomic) id /* block */ didCompletionRegistrationCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveError:(long long)a0;
- (void)requestPINWithRemainingRetries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)didCompleteAssertionWithCredential:(id)a0 error:(id)a1;
- (void)didCompleteRegistrationWithCredential:(id)a0 error:(id)a1;
- (void)didFetchPlatformLoginChoices:(id)a0;
- (void)didFetchSecurityKeyLoginChoices:(id)a0;
- (void)presentCABLESheetWithCompletionHandler:(id /* block */)a0;

@end
