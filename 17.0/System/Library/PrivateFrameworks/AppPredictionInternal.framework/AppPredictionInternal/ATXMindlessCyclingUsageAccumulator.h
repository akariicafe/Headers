@class NSArray, ATXUsageInsightsAppSessionEvent, BPSPublisher, NSMutableArray;

@interface ATXMindlessCyclingUsageAccumulator : NSObject {
    NSMutableArray *_appInFocusStartingEvents;
    NSMutableArray *_mindlessCyclingEventsAccumulator;
    ATXUsageInsightsAppSessionEvent *_stagedEventToAdd;
    BPSPublisher *_appLaunchPublisher;
}

@property (readonly, copy, nonatomic) NSArray *mindlessCyclingEvents;

- (id)init;
- (void).cxx_destruct;
- (BOOL)accumulateMindlessCyclingEvents;
- (id)eventWithBundleID:(id)a0 launchReason:(id)a1 startTime:(id)a2 endTime:(id)a3 duration:(double)a4;
- (id)initWithAppLaunchPublisher:(id)a0;
- (void)recordAppLaunchEndEvent:(id)a0;
- (void)recordAppLaunchStartEvent:(id)a0;

@end
