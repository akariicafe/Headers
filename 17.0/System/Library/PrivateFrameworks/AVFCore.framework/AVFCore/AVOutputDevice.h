@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal *_outputDevice;
}

@property (class, readonly) BOOL prefersRouteDescriptors;

+ (void)initialize;
+ (id)sharedLocalDevice;
+ (void)localDeviceDidChange;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0 routingContextFactory:(id)a1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 routingContextFactory:(id)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;

- (BOOL)setConversationDetectionEnabled:(BOOL)a0 error:(id *)a1;
- (id)connectedPairedDevices;
- (long long)HAPConformance;
- (BOOL)canMute;
- (id)identifyingMACAddress;
- (BOOL)canFetchMediaDataFromSender;
- (void)setSecondDisplayEnabled:(BOOL)a0;
- (BOOL)canBeGrouped;
- (void)increaseVolumeByCount:(long long)a0;
- (BOOL)isClusterLeader;
- (BOOL)supportsFitnessDataDestination;
- (void)setSecondDisplayMode:(id)a0 completionHandler:(id /* block */)a1;
- (id)clusteredDeviceDescriptions;
- (void)configureUsingBlock:(id /* block */)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSetVolume;
- (id)manufacturer;
- (BOOL)canCommunicateWithAllLogicalDeviceMembers;
- (id)proposedGroupID;
- (id)airPlayProperties;
- (BOOL)requiresAuthorization;
- (BOOL)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 error:(id *)a1;
- (BOOL)isLogicalDeviceLeader;
- (unsigned long long)deviceFeatures;
- (BOOL)canBeGroupLeader;
- (BOOL)supportsScreenMirroringControls;
- (BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
- (BOOL)setCurrentBluetoothListeningMode:(id)a0 error:(id *)a1;
- (BOOL)isGroupLeader;
- (BOOL)hasBatteryLevel;
- (BOOL)setHeadTrackedSpatialAudioMode:(id)a0 error:(id *)a1;
- (long long)volumeControlType;
- (BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (BOOL)isInUseByPairedDevice;
- (long long)deviceSubType;
- (void)setActivatedDeviceClusterMembersVolume:(float)a0 withRoomID:(id)a1;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)participatesInGroupPlayback;
- (float)volumeForActivatedDeviceClusterMembersWithRoomID:(id)a0;
- (BOOL)canRelayCommunicationChannel;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (id)availableBluetoothListeningModes;
- (id)clusterID;
- (BOOL)isConversationDetectionEnabled;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (long long)configuredClusterSize;
- (id)deviceID;
- (id)logicalDeviceID;
- (void)outputDeviceImplDidChangeMute:(id)a0;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (id)serialNumber;
- (BOOL)groupContainsGroupLeader;
- (BOOL)producesLowFidelityAudio;
- (id)ID;
- (BOOL)allowsHeadTrackedSpatialAudio;
- (BOOL)canAccessAppleMusic;
- (BOOL)isAppleAccessory;
- (float)batteryLevel;
- (BOOL)supportsBluetoothSharing;
- (BOOL)isHeadTrackedSpatialAudioActive;
- (BOOL)supportsBufferedAirPlay;
- (id)firmwareVersion;
- (id)headTrackedSpatialAudioMode;
- (BOOL)canAccessRemoteAssets;
- (void)setVolume:(float)a0;
- (BOOL)supportsConversationDetection;
- (long long)clusterType;
- (id)currentBluetoothListeningMode;
- (id)init;
- (unsigned long long)hash;
- (id)deviceName;
- (void)dealloc;
- (id)impl;
- (void)setMuted:(BOOL)a0;
- (void)setCurrentBluetoothListeningMode:(id)a0;
- (id)initWithOutputDeviceImpl:(id)a0 commChannelManager:(id)a1;
- (void)configureUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)outputDeviceImplDidChangeProposedGroupID:(id)a0;
- (id)modelID;
- (void)outputDeviceImplDidChangeVolumeControlType:(id)a0;
- (float)volume;
- (void)outputDeviceImplDidChangeVolume:(id)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (void)openCommunicationChannelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)communicationChannelManager:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (id)description;
- (id)groupID;
- (BOOL)isEligibleToBePredictedOutputDevice;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)communicationChannelManager:(id)a0 didCloseCommunicationChannel:(id)a1;
- (id)figEndpointOutputDeviceImpl;
- (void)outputDeviceImplCanMuteDidChange:(id)a0;
- (void)activatedDeviceClusterMembersDidChangeVolume:(id)a0 forRoomID:(struct __CFString { } *)a1;
- (void)openCommunicationChannelToDestination:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isMuted;
- (void)updateFrecencyScore;
- (id)name;
- (id)communicationChannelDelegate;
- (double)frecencyScore;
- (BOOL)isEqual:(id)a0;
- (long long)deviceType;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)a0;
- (id)modelSpecificInformation;

@end
