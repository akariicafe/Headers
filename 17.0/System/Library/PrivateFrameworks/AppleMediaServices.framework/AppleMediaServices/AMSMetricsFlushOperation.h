@class AMSMutablePromise;
@protocol AMSMetricsFlushStrategy;

@interface AMSMetricsFlushOperation : AMSMetricsOperation

@property (readonly, nonatomic) id<AMSMetricsFlushStrategy> strategy;
@property (readonly, nonatomic) AMSMutablePromise *promise;

- (void).cxx_destruct;
- (id)initWithStrategy:(id)a0 promise:(id)a1;

@end
