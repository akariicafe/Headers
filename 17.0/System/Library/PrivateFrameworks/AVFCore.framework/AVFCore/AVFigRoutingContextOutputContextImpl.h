@class AVOutputDevice, NSString, NSArray, AVOutputContextCommunicationChannel, AVWeakReference, AVOutputContext, NSDictionary, NSObject;
@protocol AVFigRoutingContextOutputDeviceTranslator, OS_dispatch_queue, AVFigRoutingContextCommunicationChannelManager;

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {
    id /* block */ _routingContextCreator;
    id<AVFigRoutingContextOutputDeviceTranslator> _deviceTranslator;
    struct OpaqueFigVolumeControllerState { } *_volumeController;
    id /* block */ _commChannelManagerCreator;
    id<AVFigRoutingContextCommunicationChannelManager> _commChannelManager;
    AVWeakReference *_weakObserver;
    BOOL _usesRouteConfigUpdatedNotification;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSDictionary *_destinationChangesForRouteChangeIDs;
}

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (weak) AVOutputContext *parentOutputContext;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *outputContextType;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, copy, nonatomic) NSString *associatedAudioDeviceID;
@property (readonly) BOOL supportsMultipleOutputDevices;
@property (readonly) BOOL supportsMultipleBluetoothOutputDevices;
@property (readonly) NSArray *outputDevices;
@property (readonly) AVOutputDevice *predictedOutputDevice;
@property (readonly) BOOL providesControlForAllVolumeFeatures;
@property (readonly) float volume;
@property (readonly) BOOL canSetVolume;
@property (readonly) BOOL canMute;
@property (getter=isMuted) BOOL muted;
@property (readonly) long long volumeControlType;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)sharedSystemScreenContext;
+ (id)addSharedAudioOutputContextImpl;
+ (id)routingContextFactory;
+ (id)defaultSharedOutputContextImpl;
+ (struct OpaqueFigRoutingContext { } *)copySystemVideoRoutingContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedAudioPresentationOutputContext;
+ (id)iTunesAudioContext;
+ (id)sharedSystemRemotePoolContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)allSharedAudioOutputContextImpls;
+ (id)auxiliaryOutputContext;
+ (id)platformDependentScreenOrVideoContext;
+ (id)outputContextImplForID:(id)a0 type:(id)a1;

- (void)increaseVolumeByCount:(long long)a0;
- (void)resetPredictedOutputDevice;
- (void)setVolume:(float)a0;
- (id)init;
- (void)dealloc;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_routeConfigUpdateEndedWithID:(struct __CFString { } *)a0 reason:(struct __CFString { } *)a1;
- (void)_muteDidChangeForRoutingContextWithID:(struct __CFString { } *)a0;
- (void)_sendCommand:(struct __CFString { } *)a0 completionHandler:(id /* block */)a1;
- (id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routingContextReplacementBlock:(id /* block */)a1;
- (void)_currentRouteChanged;
- (void)_serverConnectionDied;
- (void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(struct __CFString { } *)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (void)communicationChannelManager:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)_masterVolumeDidChangeForRoutingContextWithID:(struct __CFString { } *)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (id)initWithFigRoutingContextCreator:(id /* block */)a0;
- (void)communicationChannelManager:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)_routeConfigUpdatedWithID:(struct __CFString { } *)a0 reason:(struct __CFString { } *)a1 initiator:(struct __CFString { } *)a2 endedError:(struct __CFString { } *)a3 deviceID:(struct __CFString { } *)a4 previousDeviceIDs:(struct __CFArray { } *)a5;
- (void).cxx_destruct;
- (void)_groupConfigurationChanged;
- (void)_canMuteDidChangeForRoutingContextWithID:(struct __CFString { } *)a0;
- (void)_masterVolumeControlTypeDidChangeForRoutingContextWithID:(struct __CFString { } *)a0;
- (void)_routeChangeStartedWithID:(id)a0;
- (id)initWithRoutingContextUUID:(id)a0 type:(id)a1;
- (void)_routeConfigUpdateStartedWithID:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)a0;
- (void)outputContextDidChangeApplicationProcessID:(id)a0;
- (id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routingContextReplacementBlock:(id /* block */)a1 outputDeviceTranslator:(id)a2 volumeController:(struct OpaqueFigVolumeControllerState { } *)a3 communicationChannelManagerCreator:(id /* block */)a4;
- (void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(struct __CFString { } *)a0;
- (void)_remoteControlChannelAvailabilityChanged;
- (BOOL)isEqual:(id)a0;
- (void)_predictedSelectedRouteDescriptorChanged;
- (void)_routeChangeEndedWithID:(id)a0 reason:(struct __CFString { } *)a1;
- (id)routingContextUUID;
- (void)_systemPickerVideoRouteChanged;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
