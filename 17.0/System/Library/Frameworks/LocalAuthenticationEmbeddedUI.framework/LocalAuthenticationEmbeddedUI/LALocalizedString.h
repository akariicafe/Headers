@class NSString;

@interface LALocalizedString : NSObject

@property (class, readonly, nonatomic) NSString *cancel;
@property (class, readonly, nonatomic) NSString *tryAgain;
@property (class, readonly, nonatomic) NSString *enterPasscode;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericFourDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericSixDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericCustomDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeAlphanumeric;
@property (class, readonly, nonatomic) NSString *passcodeTypeNone;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryTitle;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryEnabledTitle;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryDisabledTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeOldPasscode;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryOldPasscode;
@property (class, readonly, nonatomic) NSString *passcodeChangeNext;
@property (class, readonly, nonatomic) NSString *passcodeChangeDone;
@property (class, readonly, nonatomic) NSString *passcodeChangeNewPasscode;
@property (class, readonly, nonatomic) NSString *passcodeChangeNewPasscodeVerify;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryRecoveryEnabled;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryRecoveryDisabled;
@property (class, readonly, nonatomic) NSString *passcodeChangeOptions;
@property (class, readonly, nonatomic) NSString *passcodeChangeUseDifferentPasscode;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeIsTooEasyTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeIsTooEasyText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeDoesNotMeetRequirementsTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeDoesNotMeetRequirementsText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorNewPasscodeMismatchTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorNewPasscodeMismatchText;
@property (class, readonly, nonatomic) NSString *passcodeChangeUseAnyway;

+ (id)passcodeChangeBackoffMessage:(long long)a0;
+ (id)passcodeChangeErrorInvalidPasscodeWithFailedAttemptsCount:(long long)a0;

@end
