@class HURoutesManager, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

+ (id)objectFromXDCObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)sharedUtilities;

- (id)init;
- (BOOL)liveListenRouteSelected;
- (BOOL)hearingAidStreamSelected;
- (void)dealloc;
- (id)currentPickableAudioRoutesIfExist;
- (BOOL)wirelessSplitterEnabled;
- (BOOL)deviceIsTinker;
- (BOOL)liveListenRouteSelectedForAvailableRoutes:(id)a0;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (BOOL)headphoneStreamSelected;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (void)updateHearingFeatureUsage;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (unsigned long long)backgroundSoundsRouteDecision;
- (id)liveListenDevice;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)currentPickableAudioRoutes;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (BOOL)hearingAidRouteAvailable;
- (void)clearAudioRoutes;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (void)liveListenRouteSelectedAsync:(id /* block */)a0;
- (void)updateWirelessSplitterState;

@end
