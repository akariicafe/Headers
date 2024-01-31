@class MTRDevice;

@interface MTRClusterLevelControl : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)readAttributeOnLevelWithParams:(id)a0;
- (id)readAttributeOptionsWithParams:(id)a0;
- (void)stopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)moveWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stepWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)moveToClosestFrequencyWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)moveToClosestFrequencyWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveToLevelWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)moveToLevelWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveToLevelWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)moveToLevelWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)moveWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentFrequencyWithParams:(id)a0;
- (id)readAttributeCurrentLevelWithParams:(id)a0;
- (id)readAttributeDefaultMoveRateWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxFrequencyWithParams:(id)a0;
- (id)readAttributeMaxLevelWithParams:(id)a0;
- (id)readAttributeMinFrequencyWithParams:(id)a0;
- (id)readAttributeMinLevelWithParams:(id)a0;
- (id)readAttributeOffTransitionTimeWithParams:(id)a0;
- (id)readAttributeOnOffTransitionTimeWithParams:(id)a0;
- (id)readAttributeOnTransitionTimeWithParams:(id)a0;
- (id)readAttributeRemainingTimeWithParams:(id)a0;
- (id)readAttributeStartUpCurrentLevelWithParams:(id)a0;
- (void)stepWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stepWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)stepWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stopWithOnOffWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOnLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOnLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOptionsWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOptionsWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
