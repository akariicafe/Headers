@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_roomRoutes;
    NSArray *_clusterMemberRoutes;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *roomRoutes;
@property (readonly, nonatomic) NSArray *clusterMemberRoutes;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (BOOL)canFetchMediaDataFromSender;
- (id)groupUID;
- (BOOL)supportsGrouping;
- (BOOL)isPickable;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (BOOL)isAppleAccessory;
- (long long)pickableRouteType;
- (BOOL)isPickedOnPairedDevice;
- (id)playingPairedDeviceName;
- (BOOL)canAccessRemoteAssets;
- (long long)clusterType;
- (BOOL)isKnown;
- (BOOL)requiresPassword;
- (BOOL)supportsWirelessDisplay;
- (id)routeUID;
- (BOOL)isDeviceSpeakerPhoneRoute;
- (BOOL)isProxyGroupPlayer;
- (id)clusterCompositionRoutes;
- (BOOL)isMacRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isSplitterCapable;
- (id)initWithOutputDevices:(id)a0;
- (long long)routeType;
- (BOOL)isNearby;
- (id)productIdentifier;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isB520Route;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)_anyOutputDeviceObjPassesTest:(id /* block */)a0;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isAirPlayRoute;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (id)description;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)isAppleTVRoute;
- (BOOL)isPhoneRoute;
- (void).cxx_destruct;
- (BOOL)isHomePodRoute;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (BOOL)isDeviceRoute;
- (BOOL)isHomeTheaterRoute;
- (long long)originalRouteSubtype;
- (id)subRoutes;
- (BOOL)isPicked;
- (BOOL)isLowLatencyRoute;
- (id)routeName;
- (BOOL)isStereoPair;
- (long long)routeSubtype;
- (BOOL)isClusterRoute;
- (BOOL)isCarplayRoute;

@end
