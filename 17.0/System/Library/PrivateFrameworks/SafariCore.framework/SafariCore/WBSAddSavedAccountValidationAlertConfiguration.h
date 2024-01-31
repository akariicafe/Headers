@class NSString;

@interface WBSAddSavedAccountValidationAlertConfiguration : NSObject

@property (class, readonly, copy, nonatomic) NSString *alertDismissActionTitleForFailedAccountCreation;
@property (class, readonly, copy, nonatomic) NSString *alertUnknownErrorStringForFailedAccountCreation;

+ (id)alertSubtitleForFailedAccountCreationWithErrorCode:(long long)a0 forUserTypedSite:(id)a1 userTypedUsername:(id)a2 highLevelDomain:(id)a3;
+ (id)alertTitleForFailedAccountCreationWithErrorCode:(long long)a0;

@end
