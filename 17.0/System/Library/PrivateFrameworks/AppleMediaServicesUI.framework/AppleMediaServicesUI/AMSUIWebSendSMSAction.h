@class NSString;

@interface AMSUIWebSendSMSAction : AMSUIWebAction

@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *digits;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (id)telephonyAccessPatterns;

@end
