@class NSString, NSDictionary, NSURL, NSURLRequest, AMSMetricsEvent;

@interface AMSUserNotificationAction : NSObject

@property (readonly, nonatomic) unsigned long long un_ActionOptions;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long style;

- (id)init;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)generateUserInfoAction;
- (id)initWithUserInfoAction:(id)a0;

@end
