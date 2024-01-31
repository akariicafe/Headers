@class NSString;

@interface AMSUIWebFetchCardDataAction : AMSUIWebAction

@property (retain, nonatomic) NSString *merchantID;
@property (retain, nonatomic) NSString *storeFrontCountryCode;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
