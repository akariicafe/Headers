@class MTRDevice;

@interface MTRClusterModeSelect : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)changeToModeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)changeToModeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentModeWithParams:(id)a0;
- (id)readAttributeDescriptionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeOnModeWithParams:(id)a0;
- (id)readAttributeStandardNamespaceWithParams:(id)a0;
- (id)readAttributeStartUpModeWithParams:(id)a0;
- (id)readAttributeSupportedModesWithParams:(id)a0;
- (void)writeAttributeOnModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeOnModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeStartUpModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeStartUpModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
