@class FBKSDraftLauncher_FrameworkPrivateName;

@interface FBKSDraftLauncher : NSObject

@property (retain, nonatomic) FBKSDraftLauncher_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) FBKSDraftLauncher *form;

- (void).cxx_destruct;
- (void)collectFeedbackWithLaunchConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)initWithFeedbackForm:(id)a0;

@end
