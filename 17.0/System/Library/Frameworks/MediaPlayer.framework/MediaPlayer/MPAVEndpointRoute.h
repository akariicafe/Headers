@class MPAVOutputDeviceRoute, NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *predictedOutputDevice;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (BOOL)canFetchMediaDataFromSender;
- (id)groupUID;
- (void)resetPredictedOutputDevice;
- (BOOL)supportsGrouping;
- (BOOL)isPickable;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)canAccessRemoteAssets;
- (long long)clusterType;
- (id)routeUID;
- (void)dealloc;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isMacRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isSplitterCapable;
- (void)encodeWithCoder:(id)a0;
- (long long)routeType;
- (id)productIdentifier;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isB520Route;
- (BOOL)supportsAirPlayGrouping;
- (id)designatedGroupLeaderName;
- (id)initWithEndpoint:(void *)a0;
- (id)description;
- (BOOL)isAppleTVRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isSplitRoute;
- (void).cxx_destruct;
- (id)routeNames;
- (BOOL)isHomePodRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isHomeTheaterRoute;
- (long long)originalRouteSubtype;
- (BOOL)isLowLatencyRoute;
- (id)routeName;
- (id)initWithCoder:(id)a0;
- (BOOL)isStereoPair;
- (long long)routeSubtype;
- (BOOL)isClusterRoute;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (id)effectiveGroupLeader;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isTVRoute;
- (long long)numberOfOutputDevices;
- (BOOL)supportsRemoteControl;

@end
