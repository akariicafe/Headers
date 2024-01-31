@class WBSSavedAccountContext, NSString, NSArray, NSURL, WBSGlobalFrameIdentifier;

@interface SFAccountPickerConfiguration : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *promptWhenPasskeysAreAvailable;
@property (copy, nonatomic) NSArray *serviceNameHintStrings;
@property (copy, nonatomic) NSArray *domainHintStrings;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic) BOOL forUserNamesOnly;
@property (nonatomic) BOOL shouldShowIcons;
@property (nonatomic) BOOL shouldShowPasskeysInAccountPicker;
@property (nonatomic) BOOL shouldShowAutoFillPasskeys;
@property (copy, nonatomic) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys;
@property (nonatomic) struct { unsigned int val[8]; } connectedAppAuditToken;
@property (readonly, nonatomic) BOOL hasAuditToken;
@property (readonly, nonatomic) BOOL shouldAllowAddingNewPasswords;
@property (nonatomic) BOOL shouldEnableAddingNewPasswordsIfPossible;
@property (nonatomic) BOOL shouldShowGeneratedPasswordsForDomain;
@property (copy, nonatomic) NSString *addPasswordSuggestedDomain;
@property (nonatomic) BOOL isForFillingIndividualAccountFields;
@property (nonatomic) BOOL shouldShowReceivedVerificationCodes;
@property (copy, nonatomic) NSString *appIDForReceivedVerificationCodes;
@property (copy, nonatomic) NSURL *websiteURLForReceivedVerificationCodes;
@property (nonatomic) BOOL shouldHideCreatePasswordsInSettingsHint;
@property (retain, nonatomic) WBSSavedAccountContext *savedAccountContext;

- (id)init;
- (void).cxx_destruct;

@end
