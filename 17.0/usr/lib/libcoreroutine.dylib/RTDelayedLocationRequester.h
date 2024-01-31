@class RTTimer, RTTimerManager, NSDate, RTLocationManager, NSObject;
@protocol OS_dispatch_queue, RTDelayedLocationRequesterDelegate;

@interface RTDelayedLocationRequester : NSObject

@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *delayTimer;
@property (retain, nonatomic) RTTimer *activeTimer;
@property (readonly, nonatomic) double maxHorizontalAccuracy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSDate *activeStartDate;
@property (retain, nonatomic) id<RTDelayedLocationRequesterDelegate> delegate;

- (void)shutdown;
- (void)onLocationNotification:(id)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_onLocation:(id)a0;
- (void).cxx_destruct;
- (void)_stopUpdatingLocation;
- (void)updateFireDate:(id)a0;
- (void)_onActiveTimerExpiry;
- (void)_onDelayTimerExpiry;
- (void)_startUpdatingLocation;
- (void)_updateDelayTimer;
- (void)_updateFireDate:(id)a0 handler:(id /* block */)a1;
- (id)initWithLocationManager:(id)a0 maxHorizontalAccuracy:(double)a1 queue:(id)a2;
- (id)initWithLocationManager:(id)a0 timerManager:(id)a1 maxHorizontalAccuracy:(double)a2 queue:(id)a3;
- (void)updateFireDate:(id)a0 handler:(id /* block */)a1;

@end
