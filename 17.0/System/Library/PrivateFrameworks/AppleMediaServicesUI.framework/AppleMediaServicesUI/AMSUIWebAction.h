@class NSArray, AMSUIWebClientContext, NSString, AMSMetricsEvent;

@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable>

@property (readonly, nonatomic) AMSMetricsEvent *actionEvent;
@property (retain, nonatomic) NSArray *acceptedResponseVersions;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (id)_initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
