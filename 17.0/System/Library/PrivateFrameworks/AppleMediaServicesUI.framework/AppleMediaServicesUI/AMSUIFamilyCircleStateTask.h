@class FACircleContext, UIViewController;

@interface AMSUIFamilyCircleStateTask : AMSTask

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) FACircleContext *faContext;

- (id)present;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 presentingViewController:(id)a1;

@end
