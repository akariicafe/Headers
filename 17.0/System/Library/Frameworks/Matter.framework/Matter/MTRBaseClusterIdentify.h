@class MTRBaseDevice;

@interface MTRBaseClusterIdentify : MTRCluster

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
+ (void)readAttributeIdentifyTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeIdentifyTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeIdentifyTypeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeIdentifyTypeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (void)identifyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)identifyWithParams:(id)a0 completionHandler:(id /* block */)a1;
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
- (void)readAttributeIdentifyTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeIdentifyTimeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeIdentifyTypeWithCompletion:(id /* block */)a0;
- (void)readAttributeIdentifyTypeWithCompletionHandler:(id /* block */)a0;
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
- (void)subscribeAttributeIdentifyTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeIdentifyTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeIdentifyTypeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeIdentifyTypeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)triggerEffectWithParams:(id)a0 completion:(id /* block */)a1;
- (void)triggerEffectWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeIdentifyTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;

@end
