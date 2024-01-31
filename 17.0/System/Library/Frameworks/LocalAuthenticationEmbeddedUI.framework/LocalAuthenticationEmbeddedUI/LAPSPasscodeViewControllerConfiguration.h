@class NSString, LAPSPasscodeOptionsViewControllerConfiguration, LAPSPasscodeType;

@interface LAPSPasscodeViewControllerConfiguration : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *nextButton;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) LAPSPasscodeType *passcodeType;
@property (nonatomic) BOOL shouldAvoidBecomingFirstResponderOnStart;
@property (retain, nonatomic) LAPSPasscodeOptionsViewControllerConfiguration *optionsConfiguration;

- (void).cxx_destruct;

@end
