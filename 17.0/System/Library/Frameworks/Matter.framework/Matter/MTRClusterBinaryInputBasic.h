@class MTRDevice;

@interface MTRClusterBinaryInputBasic : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)writeAttributeActiveTextWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveTextWithParams:(id)a0;
- (id)readAttributeApplicationTypeWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDescriptionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeInactiveTextWithParams:(id)a0;
- (id)readAttributeOutOfServiceWithParams:(id)a0;
- (id)readAttributePolarityWithParams:(id)a0;
- (id)readAttributePresentValueWithParams:(id)a0;
- (id)readAttributeReliabilityWithParams:(id)a0;
- (id)readAttributeStatusFlagsWithParams:(id)a0;
- (void)writeAttributeActiveTextWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeInactiveTextWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeInactiveTextWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOutOfServiceWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOutOfServiceWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePresentValueWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePresentValueWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeReliabilityWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeReliabilityWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
