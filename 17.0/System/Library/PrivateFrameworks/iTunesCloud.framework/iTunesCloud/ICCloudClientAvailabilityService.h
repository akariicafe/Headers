@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, weak, nonatomic) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)canShowCloudVideo;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestricted;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (id)initWithListenerEndpointProvider:(id)a0;
- (void).cxx_destruct;

@end
