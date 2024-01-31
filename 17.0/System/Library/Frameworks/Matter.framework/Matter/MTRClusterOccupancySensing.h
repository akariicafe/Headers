@class MTRDevice;

@interface MTRClusterOccupancySensing : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithParams:(id)a0;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeOccupancySensorTypeBitmapWithParams:(id)a0;
- (id)readAttributeOccupancySensorTypeWithParams:(id)a0;
- (id)readAttributeOccupancyWithParams:(id)a0;
- (id)readAttributePIROccupiedToUnoccupiedDelayWithParams:(id)a0;
- (id)readAttributePIRUnoccupiedToOccupiedDelayWithParams:(id)a0;
- (id)readAttributePIRUnoccupiedToOccupiedThresholdWithParams:(id)a0;
- (id)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithParams:(id)a0;
- (id)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithParams:(id)a0;
- (id)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithParams:(id)a0;
- (id)readAttributePirOccupiedToUnoccupiedDelayWithParams:(id)a0;
- (id)readAttributePirUnoccupiedToOccupiedDelayWithParams:(id)a0;
- (id)readAttributePirUnoccupiedToOccupiedThresholdWithParams:(id)a0;
- (id)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithParams:(id)a0;
- (id)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithParams:(id)a0;
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
