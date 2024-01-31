@class NSString, _DKEvent, NSDate;

@interface _DKNotificationWatchNearbyMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    BOOL _enabled;
    int _token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)_eventWithNearbyDeviceCount:(unsigned long long)a0;
+ (void)setIsWatchNearby:(BOOL)a0;

- (void)dealloc;
- (void)setWatchIsNearby;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;

@end
