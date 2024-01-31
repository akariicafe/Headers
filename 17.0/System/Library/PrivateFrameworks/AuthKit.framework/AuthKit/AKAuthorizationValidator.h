@interface AKAuthorizationValidator : NSObject

+ (BOOL)_requirePasscodeSet;
+ (BOOL)canPerformAuthorizationRequest:(id)a0 error:(id *)a1;
+ (BOOL)canPerformCredentialRequest:(id)a0 error:(id *)a1;
+ (BOOL)canPerformPasswordRequest:(id)a0 error:(id *)a1;
+ (BOOL)shouldContinueWithResponse:(id)a0 error:(id *)a1;

@end
