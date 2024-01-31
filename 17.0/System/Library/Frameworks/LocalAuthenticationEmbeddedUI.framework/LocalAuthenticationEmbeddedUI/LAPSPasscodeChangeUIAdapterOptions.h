@class NSString;

@interface LAPSPasscodeChangeUIAdapterOptions : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *oldPasscodePrompt;
@property (retain, nonatomic) NSString *passcodePrompt;
@property (nonatomic) BOOL isPasscodeRecoveryOptionVisible;

- (void).cxx_destruct;

@end
