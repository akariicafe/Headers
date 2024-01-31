@class NSString, NSArray, NSTimer, MNActiveRouteInfo, MNNavigationSessionState, MNLocation;
@protocol MNTimeAndDistanceUpdaterDelegate;

@interface MNTimeAndDistanceUpdater : NSObject <MNNavigationSessionStateListener> {
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    unsigned long long _currentLogType;
}

@property (weak, nonatomic) id<MNTimeAndDistanceUpdaterDelegate> delegate;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNavigationSessionState:(id)a0;
- (id)_batteryChargeInfoForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)_logDisplayETAInfo:(id)a0;
- (id)_routeDistanceInfoForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)_startTimerToNextMinute;
- (void)setLocation:(id)a0 notificationType:(unsigned long long)a1;
- (void)setRoutes:(id)a0 mainRoute:(id)a1 location:(id)a2 notificationType:(unsigned long long)a3;
- (void)startUpdating;
- (void)stopUpdating;
- (void)updateDisplayETAForRoute:(id)a0 notificationType:(unsigned long long)a1;

@end
