@class NSString, UIViewController;

@interface LAPasscodeChangeEnvironmentConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *passcodePrompt;
@property (retain, nonatomic) NSString *oldPasscodePrompt;
@property (readonly, nonatomic) UIViewController *parentVC;

- (void).cxx_destruct;
- (id)initWithParentVC:(id)a0;

@end
