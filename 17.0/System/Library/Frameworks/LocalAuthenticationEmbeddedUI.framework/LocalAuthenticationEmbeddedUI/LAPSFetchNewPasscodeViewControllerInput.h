@class NSString, NSOrderedSet, LAPSPasscodeType;

@interface LAPSFetchNewPasscodeViewControllerInput : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *footerRecoveryEnabled;
@property (retain, nonatomic) NSString *footerRecoveryDisabled;
@property (retain, nonatomic) NSString *nextButton;
@property (retain, nonatomic) LAPSPasscodeType *passcodeType;
@property (retain, nonatomic) NSString *passcodeOptionsTitle;
@property (retain, nonatomic) NSString *passcodeOptionsCancelTitle;
@property (retain, nonatomic) NSString *passcodeRecoveryTitle;
@property (retain, nonatomic) NSString *passcodeRecoveryEnabledTitle;
@property (retain, nonatomic) NSString *passcodeRecoveryDisabledTitle;
@property (retain, nonatomic) NSOrderedSet *allowedPasscodeTypes;
@property (nonatomic) BOOL isPasscodeRecoveryOptionVisible;
@property (nonatomic) BOOL isPasscodeRecoverySupported;
@property (nonatomic) BOOL isPasscodeRecoveryEnabled;
@property (nonatomic) BOOL isPasscodeRecoveryRestricted;
@property (retain, nonatomic) NSString *verifyPrompt;
@property (retain, nonatomic) NSString *verifyNextButton;

- (void).cxx_destruct;

@end
