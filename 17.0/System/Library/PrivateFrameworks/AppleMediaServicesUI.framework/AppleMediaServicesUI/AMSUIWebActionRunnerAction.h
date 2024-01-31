@class NSDictionary;

@interface AMSUIWebActionRunnerAction : AMSUIWebAction

@property (copy, nonatomic) NSDictionary *actionPayload;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
