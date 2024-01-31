@class NSArray, MRAVConcreteOutputContext, MROutputContextController, NSString, MROrigin;

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext;
@property (retain, nonatomic) MROutputContextController *outputContextController;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;

- (void)resetPredictedOutputDevice;
- (id)predictedOutputDevice;
- (id)designatedGroupLeader;
- (void)dealloc;
- (BOOL)isProxyGroupPlayer;
- (id)personalOutputDevices;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)canModifyGroupMembership;
- (BOOL)isConnected;
- (long long)connectionType;
- (void)outputContextDataSourceReloaded:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_adjustOutputDeviceVolume:(long long)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setConversationDetectionEnabled:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)_muteOutputDeviceVolume:(BOOL)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (id)_externalOutputContext;
- (id)initWithCoder:(id)a0;
- (void)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
