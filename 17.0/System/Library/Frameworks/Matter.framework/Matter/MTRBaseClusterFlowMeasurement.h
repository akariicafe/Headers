@class MTRBaseDevice;

@interface MTRBaseClusterFlowMeasurement : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) unsigned short endpoint;

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxMeasuredValueWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMaxMeasuredValueWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMeasuredValueWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMeasuredValueWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMinMeasuredValueWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMinMeasuredValueWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeToleranceWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeToleranceWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMaxMeasuredValueWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxMeasuredValueWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMeasuredValueWithCompletion:(id /* block */)a0;
- (void)readAttributeMeasuredValueWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMinMeasuredValueWithCompletion:(id /* block */)a0;
- (void)readAttributeMinMeasuredValueWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeToleranceWithCompletion:(id /* block */)a0;
- (void)readAttributeToleranceWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxMeasuredValueWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMaxMeasuredValueWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMeasuredValueWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMeasuredValueWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMinMeasuredValueWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMinMeasuredValueWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeToleranceWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeToleranceWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;

@end
