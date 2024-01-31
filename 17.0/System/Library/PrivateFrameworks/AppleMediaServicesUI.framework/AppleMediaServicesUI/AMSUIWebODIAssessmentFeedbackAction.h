@class NSString, AMSUIWebClientContext;

@interface AMSUIWebODIAssessmentFeedbackAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *cacheIdentifier;
@property (nonatomic) unsigned long long outcome;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
