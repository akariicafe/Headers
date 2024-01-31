@interface CALNEKTTLEventTracker : NSObject <CALNTTLEventTracker>

@property (class, readonly, nonatomic) CALNEKTTLEventTracker *sharedInstance;

- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)a0 transportType:(unsigned long long)a1 etaType:(unsigned long long)a2 travelState:(unsigned long long)a3 hasSuggestedLocation:(BOOL)a4 isOnSharedCalendar:(BOOL)a5;
- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)a0 etaType:(unsigned long long)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;

@end
