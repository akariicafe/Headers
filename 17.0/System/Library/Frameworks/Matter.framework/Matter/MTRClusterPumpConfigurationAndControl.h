@class MTRDevice;

@interface MTRClusterPumpConfigurationAndControl : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)readAttributeMaxFlowWithParams:(id)a0;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeCapacityWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeControlModeWithParams:(id)a0;
- (id)readAttributeEffectiveControlModeWithParams:(id)a0;
- (id)readAttributeEffectiveOperationModeWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLifetimeEnergyConsumedWithParams:(id)a0;
- (id)readAttributeLifetimeRunningHoursWithParams:(id)a0;
- (id)readAttributeMaxCompPressureWithParams:(id)a0;
- (id)readAttributeMaxConstFlowWithParams:(id)a0;
- (id)readAttributeMaxConstPressureWithParams:(id)a0;
- (id)readAttributeMaxConstSpeedWithParams:(id)a0;
- (id)readAttributeMaxConstTempWithParams:(id)a0;
- (id)readAttributeMaxPressureWithParams:(id)a0;
- (id)readAttributeMaxSpeedWithParams:(id)a0;
- (id)readAttributeMinCompPressureWithParams:(id)a0;
- (id)readAttributeMinConstFlowWithParams:(id)a0;
- (id)readAttributeMinConstPressureWithParams:(id)a0;
- (id)readAttributeMinConstSpeedWithParams:(id)a0;
- (id)readAttributeMinConstTempWithParams:(id)a0;
- (id)readAttributeOperationModeWithParams:(id)a0;
- (id)readAttributePowerWithParams:(id)a0;
- (id)readAttributePumpStatusWithParams:(id)a0;
- (id)readAttributeSpeedWithParams:(id)a0;
- (void)writeAttributeControlModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeControlModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOperationModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOperationModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
