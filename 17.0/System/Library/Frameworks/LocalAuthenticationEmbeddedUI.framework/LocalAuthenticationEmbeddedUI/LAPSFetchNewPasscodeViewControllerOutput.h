@class LAPSPasscode;

@interface LAPSFetchNewPasscodeViewControllerOutput : NSObject

@property (retain, nonatomic) LAPSPasscode *passcode;
@property (nonatomic) BOOL isPasscodeRecoveryEnabled;

- (void).cxx_destruct;

@end
