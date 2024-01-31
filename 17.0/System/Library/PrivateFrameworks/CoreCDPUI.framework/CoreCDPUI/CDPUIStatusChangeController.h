@protocol CDPUIStatusChangeModel;

@interface CDPUIStatusChangeController : NSObject

@property (readonly, nonatomic) id<CDPUIStatusChangeModel> model;
@property (copy, nonatomic) id /* block */ userActionCallback;
@property (copy, nonatomic) id /* block */ completionCallback;

+ (id)controllerWithTargetWebAccessStatus:(unsigned long long)a0;
+ (id)controllerWithTargetWalrusStatus:(unsigned long long)a0;
+ (id)controllerWithTargetWalrusStatus:(unsigned long long)a0 altDSID:(id)a1;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)_configureAlertController;
- (void)presentWithViewController:(id)a0 presentationType:(unsigned long long)a1;
- (void)_alertWithViewController:(id)a0;
- (id)_configurePasscodeVerificationControllerWithViewController:(id)a0 presentationType:(unsigned long long)a1;
- (void)_handleUserChoice:(unsigned long long)a0;
- (void)_handleUserChoice:(unsigned long long)a0 error:(id)a1;
- (void)_passcodeVerificationflowWithViewController:(id)a0 presentationType:(unsigned long long)a1;

@end
