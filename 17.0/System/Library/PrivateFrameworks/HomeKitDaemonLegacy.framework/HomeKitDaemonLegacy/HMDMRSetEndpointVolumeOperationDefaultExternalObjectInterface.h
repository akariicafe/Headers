@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>

- (id)copyMRAVEndpointOutputDevices:(id)a0;
- (id)createAssistantConnection;
- (id)createAssistantDiscovery;
- (id)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2;
- (id)setMRAVOutputDeviceVolume:(float)a0 endpoint:(id)a1 outputDeviceUID:(id)a2 queue:(id)a3;

@end
