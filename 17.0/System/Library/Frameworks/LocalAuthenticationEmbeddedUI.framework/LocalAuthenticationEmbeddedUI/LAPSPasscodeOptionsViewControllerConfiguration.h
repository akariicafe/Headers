@class NSString, NSOrderedSet, LAPSPasscodeType;

@interface LAPSPasscodeOptionsViewControllerConfiguration : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *passcodeRecoveryTitle;
@property (retain, nonatomic) NSString *passcodeRecoveryEnabledTitle;
@property (retain, nonatomic) NSString *passcodeRecoveryDisabledTitle;
@property (retain, nonatomic) NSString *cancelTitle;
@property (retain, nonatomic) NSOrderedSet *allowedPasscodeTypes;
@property (retain, nonatomic) LAPSPasscodeType *selectedPasscodeType;
@property (nonatomic) BOOL isPasscodeRecoveryOptionVisible;
@property (nonatomic) BOOL isPasscodeRecoverySupported;
@property (nonatomic) BOOL isPasscodeRecoveryEnabled;
@property (nonatomic) BOOL isPasscodeRecoveryRestricted;

- (void).cxx_destruct;

@end
