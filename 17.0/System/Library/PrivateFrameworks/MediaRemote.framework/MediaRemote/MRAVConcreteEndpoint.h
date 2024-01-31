@class AVOutputDeviceGroup;

@interface MRAVConcreteEndpoint : MRConcreteEndpoint {
    AVOutputDeviceGroup *_outputDeviceGroup;
}

+ (id)errorWithChangeResult:(id)a0 outputDevice:(id)a1;

- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setExternalDevice:(id)a0;
- (void).cxx_destruct;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleVolumeCapabilityChangedNotification:(id)a0;
- (void)handleVolumeChangedNotification:(id)a0;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1;
- (id)initWithOutputDeviceGroup:(id)a0 groupLeader:(id)a1 outputDevices:(id)a2;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)outputDeviceVolumeControlCapabilities:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)registerVolumeNotifications;
- (void)setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (float)volumeForOutputDevice:(id)a0 error:(id *)a1;

@end
