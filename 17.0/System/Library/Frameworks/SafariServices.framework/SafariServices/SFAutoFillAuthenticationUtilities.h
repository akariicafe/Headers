@interface SFAutoFillAuthenticationUtilities : NSObject

+ (id)customAuthenticationTitleForLoggingInWithSavedAccountOnWebsite:(id)a0;
+ (id)customAuthenticationTitleForFillingCreditCard;
+ (id)customAuthenticationTitleForFillingSavedPasskey;
+ (id)customAuthenticationTitleForFillingSavedPassword;
+ (id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+ (id)customAuthenticationTitleForViewingSavedAccounts;
+ (id)passcodePromptForFillingCreditCard;
+ (id)passcodePromptForFillingSavedAccount;
+ (id)passcodePromptForFillingTimeBasedOneTimeCode;
+ (id)passcodePromptForLoggingInWithSavedAccountOnWebsite:(id)a0;
+ (id)passcodePromptForViewingSavedAccounts;

@end
