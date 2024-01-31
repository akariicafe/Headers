@class NSString, LAPSPasscodeType;

@interface LAPSFetchOldPasscodeViewControllerInput : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *nextButton;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic) long long backoffTimeout;
@property (retain, nonatomic) LAPSPasscodeType *passcodeType;

- (void).cxx_destruct;

@end
