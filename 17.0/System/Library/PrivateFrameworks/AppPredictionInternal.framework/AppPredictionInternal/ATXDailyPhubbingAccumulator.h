@class BMDeviceScreenLocked, NSArray, RTProximityEvent, BPSPublisher, NSDate, NSMutableArray;

@interface ATXDailyPhubbingAccumulator : NSObject {
    NSMutableArray *_phubbingSessionEvents;
    NSDate *_phubbingStartTime;
    NSDate *_phubbingEndTime;
    NSMutableArray *_appInFocusStartingEvents;
    NSMutableArray *_appSessionsWithinPhubbingEvent;
    BMDeviceScreenLocked *_lastLoggedScreenEvent;
    BPSPublisher *_proximityPublisher;
    BPSPublisher *_deviceScreenLockedPublisher;
    BPSPublisher *_appLaunchPublisher;
}

@property (readonly, nonatomic) RTProximityEvent *mostRecentProximityPeopleEvent;
@property (readonly, copy, nonatomic) NSArray *phubbingSessions;

- (id)init;
- (void).cxx_destruct;
- (void)addAppSession:(id)a0 launchReason:(id)a1 startTime:(id)a2 endTime:(id)a3 duration:(double)a4;
- (BOOL)appInFocusEventOccured:(id)a0 whileNearPeople:(id)a1;
- (id)dateIntervalFromAppInFocusEvent:(id)a0;
- (id)dateIntervalFromPeopleEvent:(id)a0;
- (id)dateIntervalFromScreenLockEvent:(id)a0;
- (id)initWithProximityEventPublisher:(id)a0 screenLockedPublisher:(id)a1 appLaunchPublisher:(id)a2;
- (void)recordAppLaunchEndEvent:(id)a0;
- (void)recordAppLaunchStartEvent:(id)a0;
- (BOOL)screenEventOccured:(id)a0 whileNearPeople:(id)a1;
- (BOOL)successfullyAccumulatedPhubbingEvents;
- (void)trackMostRecentDiscoveredPeopleEvent:(id)a0;
- (void)trackScreenEndingEvent:(id)a0;
- (void)trackScreenStartingEvent:(id)a0;

@end
