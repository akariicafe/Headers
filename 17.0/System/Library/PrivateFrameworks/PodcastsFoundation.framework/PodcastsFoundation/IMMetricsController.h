@class NSString, AMSMetrics;

@interface IMMetricsController : NSObject <IMMetricsControllerProtocol>

@property (retain, nonatomic) AMSMetrics *metricsController;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL shouldSuppressUserInfo;
@property (nonatomic) BOOL shouldIgnoreDNU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queue;

- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (id)initWithTopic:(id)a0;
- (void)addAdditionalFieldsToEvent:(id)a0 completion:(id /* block */)a1;
- (id)flushImmediately;
- (void)getMetricsController:(id /* block */)a0;

@end
