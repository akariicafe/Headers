@interface CKFunCameraUserConsentManager : NSObject

+ (void)presentFromViewController:(id)a0 presentedBlock:(id /* block */)a1 confirmBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
+ (BOOL)shouldPromptUserForFunCameraConsent;

- (id)init;
- (void).cxx_destruct;

@end
