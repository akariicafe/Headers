@class MTRDevice;

@interface MTRClusterThermostatUserInterfaceConfiguration : MTRCluster

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
- (id)readAttributeKeypadLockoutWithParams:(id)a0;
- (id)readAttributeScheduleProgrammingVisibilityWithParams:(id)a0;
- (id)readAttributeTemperatureDisplayModeWithParams:(id)a0;
- (void)writeAttributeKeypadLockoutWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeKeypadLockoutWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeTemperatureDisplayModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeTemperatureDisplayModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
