@interface CALNTimeToLeaveEventTrackerUtilities : NSObject

+ (void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)a0 hypothesis:(id)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;
+ (void)trackEmailEngagedForNotificationUsingTTLEventTracker:(id)a0 hypothesis:(id)a1 hasSuggestedLocation:(BOOL)a2 isOnSharedCalendar:(BOOL)a3;
+ (unsigned long long)ttlEventTrackerAlertTypeForDate:(id)a0 hypothesis:(id)a1;
+ (id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)a0;
+ (unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)a0;
+ (unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)a0;
+ (unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)a0;

@end
