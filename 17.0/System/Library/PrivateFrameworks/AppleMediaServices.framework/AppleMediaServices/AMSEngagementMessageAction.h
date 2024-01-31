@class NSString, NSDictionary, NSURL, AMSMetricsEvent;

@interface AMSEngagementMessageAction : NSObject

@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent;
@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSString *kind;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) BOOL requiresDelegate;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)makeDialogAction;

@end
