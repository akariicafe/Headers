@class MTRDevice;

@interface MTRClusterFlowMeasurement : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxMeasuredValueWithParams:(id)a0;
- (id)readAttributeMeasuredValueWithParams:(id)a0;
- (id)readAttributeMinMeasuredValueWithParams:(id)a0;
- (id)readAttributeToleranceWithParams:(id)a0;

@end
