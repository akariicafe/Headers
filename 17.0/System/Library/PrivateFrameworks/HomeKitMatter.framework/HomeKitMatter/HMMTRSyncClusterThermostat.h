@class NSString;

@interface HMMTRSyncClusterThermostat : MTRClusterThermostat <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)readAttributeOccupiedHeatingOrCoolingSetpointWithParams:(id)a0;
- (id)readAttributePluginActiveWithParams:(id)a0;
- (id)readAttributePluginCurrentHeaterCoolerStateWithParams:(id)a0;
- (id)readAttributePluginCurrentHeatingCoolingStateWithParams:(id)a0;
- (id)readAttributePluginTargetHeaterCoolerStateWithParams:(id)a0;
- (void)updatedValueForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginActiveForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginCurrentHeaterCoolerStateForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginTargetHeaterCoolerStateForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePluginActiveWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePluginTargetHeaterCoolerStateWithValue:(id)a0 expectedValueInterval:(id)a1;

@end
