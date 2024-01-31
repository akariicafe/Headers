@interface AMSUIWebFetchTelephonyAction : AMSUIWebAction

@property (nonatomic) BOOL suppressPhoneNumber;

- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
