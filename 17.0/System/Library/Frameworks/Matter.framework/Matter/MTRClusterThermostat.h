@class MTRDevice;

@interface MTRClusterThermostat : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)writeAttributeACRefrigerantTypeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACCapacityWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeSystemModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUnoccupiedSetbackWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)clearWeeklyScheduleWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)clearWeeklyScheduleWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)clearWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)getWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)getWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeACCapacityWithParams:(id)a0;
- (id)readAttributeACCapacityformatWithParams:(id)a0;
- (id)readAttributeACCoilTemperatureWithParams:(id)a0;
- (id)readAttributeACCompressorTypeWithParams:(id)a0;
- (id)readAttributeACErrorCodeWithParams:(id)a0;
- (id)readAttributeACLouverPositionWithParams:(id)a0;
- (id)readAttributeACRefrigerantTypeWithParams:(id)a0;
- (id)readAttributeACTypeWithParams:(id)a0;
- (id)readAttributeAbsMaxCoolSetpointLimitWithParams:(id)a0;
- (id)readAttributeAbsMaxHeatSetpointLimitWithParams:(id)a0;
- (id)readAttributeAbsMinCoolSetpointLimitWithParams:(id)a0;
- (id)readAttributeAbsMinHeatSetpointLimitWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeControlSequenceOfOperationWithParams:(id)a0;
- (id)readAttributeEmergencyHeatDeltaWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHVACSystemTypeConfigurationWithParams:(id)a0;
- (id)readAttributeLocalTemperatureCalibrationWithParams:(id)a0;
- (id)readAttributeLocalTemperatureWithParams:(id)a0;
- (id)readAttributeMaxCoolSetpointLimitWithParams:(id)a0;
- (id)readAttributeMaxHeatSetpointLimitWithParams:(id)a0;
- (id)readAttributeMinCoolSetpointLimitWithParams:(id)a0;
- (id)readAttributeMinHeatSetpointLimitWithParams:(id)a0;
- (id)readAttributeMinSetpointDeadBandWithParams:(id)a0;
- (id)readAttributeNumberOfDailyTransitionsWithParams:(id)a0;
- (id)readAttributeNumberOfWeeklyTransitionsWithParams:(id)a0;
- (id)readAttributeOccupancyWithParams:(id)a0;
- (id)readAttributeOccupiedCoolingSetpointWithParams:(id)a0;
- (id)readAttributeOccupiedHeatingSetpointWithParams:(id)a0;
- (id)readAttributeOccupiedSetbackMaxWithParams:(id)a0;
- (id)readAttributeOccupiedSetbackMinWithParams:(id)a0;
- (id)readAttributeOccupiedSetbackWithParams:(id)a0;
- (id)readAttributeOutdoorTemperatureWithParams:(id)a0;
- (id)readAttributePICoolingDemandWithParams:(id)a0;
- (id)readAttributePIHeatingDemandWithParams:(id)a0;
- (id)readAttributeRemoteSensingWithParams:(id)a0;
- (id)readAttributeSetpointChangeAmountWithParams:(id)a0;
- (id)readAttributeSetpointChangeSourceTimestampWithParams:(id)a0;
- (id)readAttributeSetpointChangeSourceWithParams:(id)a0;
- (id)readAttributeStartOfWeekWithParams:(id)a0;
- (id)readAttributeSystemModeWithParams:(id)a0;
- (id)readAttributeTemperatureSetpointHoldDurationWithParams:(id)a0;
- (id)readAttributeTemperatureSetpointHoldWithParams:(id)a0;
- (id)readAttributeThermostatProgrammingOperationModeWithParams:(id)a0;
- (id)readAttributeThermostatRunningModeWithParams:(id)a0;
- (id)readAttributeThermostatRunningStateWithParams:(id)a0;
- (id)readAttributeUnoccupiedCoolingSetpointWithParams:(id)a0;
- (id)readAttributeUnoccupiedHeatingSetpointWithParams:(id)a0;
- (id)readAttributeUnoccupiedSetbackMaxWithParams:(id)a0;
- (id)readAttributeUnoccupiedSetbackMinWithParams:(id)a0;
- (id)readAttributeUnoccupiedSetbackWithParams:(id)a0;
- (void)setWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setWeeklyScheduleWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)setpointRaiseLowerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)setpointRaiseLowerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAttributeACCapacityWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACCapacityformatWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACCapacityformatWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeACCompressorTypeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACCompressorTypeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeACErrorCodeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACErrorCodeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeACLouverPositionWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACLouverPositionWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeACRefrigerantTypeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeACTypeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACTypeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeControlSequenceOfOperationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeControlSequenceOfOperationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeEmergencyHeatDeltaWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeEmergencyHeatDeltaWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeHVACSystemTypeConfigurationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeHVACSystemTypeConfigurationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeLocalTemperatureCalibrationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLocalTemperatureCalibrationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMaxCoolSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMaxCoolSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMaxHeatSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMaxHeatSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMinCoolSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMinCoolSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMinHeatSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMinHeatSetpointLimitWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMinSetpointDeadBandWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMinSetpointDeadBandWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOccupiedCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOccupiedCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOccupiedHeatingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOccupiedHeatingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeOccupiedSetbackWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOccupiedSetbackWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeRemoteSensingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeRemoteSensingWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeSystemModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeTemperatureSetpointHoldDurationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeTemperatureSetpointHoldDurationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeTemperatureSetpointHoldWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeTemperatureSetpointHoldWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeThermostatProgrammingOperationModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeThermostatProgrammingOperationModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUnoccupiedCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeUnoccupiedCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUnoccupiedHeatingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeUnoccupiedHeatingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeUnoccupiedSetbackWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
