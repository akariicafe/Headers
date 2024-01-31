@class NSString, NSDictionary;

@interface AMSUIWebPluginAction : AMSUIWebAction

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
