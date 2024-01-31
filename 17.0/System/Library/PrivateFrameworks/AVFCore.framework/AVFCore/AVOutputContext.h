@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)sharedSystemScreenContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (void)initialize;
+ (id)preferredOutputDevicesForAudioSession:(id)a0;
+ (id)allSharedAudioOutputContexts;
+ (id)sharedSystemAudioContext;
+ (Class)defaultOutputContextImplClass;
+ (id)addSharedAudioOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)defaultSharedOutputContext;
+ (id)outputContext;
+ (id)sharedAudioPresentationOutputContext;
+ (id)iTunesAudioContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)sharedSystemRemotePoolContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)auxiliaryOutputContext;

- (BOOL)canMute;
- (void)increaseVolumeByCount:(long long)a0;
- (void)resetPredictedOutputDevice;
- (BOOL)canSetVolume;
- (long long)volumeControlType;
- (id)ID;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevices:(id)a0;
- (void)setVolume:(float)a0;
- (id)init;
- (unsigned long long)hash;
- (id)predictedOutputDevice;
- (void)dealloc;
- (id)impl;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setMuted:(BOOL)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (id)outputContextType;
- (void)encodeWithCoder:(id)a0;
- (id)outputDevices;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)setApplicationProcessID:(int)a0;
- (id)outputDevice;
- (float)volume;
- (void)decreaseVolumeByCount:(long long)a0;
- (void)addOutputDevice:(id)a0;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (id)description;
- (BOOL)supportsMultipleOutputDevices;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (BOOL)providesControlForAllVolumeFeatures;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)removeOutputDevice:(id)a0;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)outputContextImplDidChangePredictedOutputDevice:(id)a0;
- (id)outgoingCommunicationChannel;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (BOOL)isMuted;
- (id)contextID;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (id)communicationChannelDelegate;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)getApplicationProcessID:(int *)a0;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)outputContextImplDidChangeMute:(id)a0;
- (int)applicationProcessID;
- (unsigned long long)outputDeviceFeatures;
- (id)initWithCoder:(id)a0;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
