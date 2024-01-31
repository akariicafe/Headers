@class NTKPeopleComplication, NSString, NSObject, NTKPeopleComplicationEntry;
@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isPaused;
    BOOL _needsInvalidation;
    NTKPeopleComplication *_complication;
    NSString *_secondaryContactID;
    NSString *_storeBackedContactID;
    NTKPeopleComplicationEntry *_timelineEntry;
    NTKPeopleComplicationEntry *_switcherEntry;
}

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (long long)tritiumUpdatePriority;

- (void)pause;
- (void)dealloc;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)resume;
- (void).cxx_destruct;
- (void)_didReceiveContactsCachceChangedNotification;
- (void)_invalidateIfNeeded;
- (id)_loadTimelineEntry;
- (void)_queue_reloadTimelineEntry;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)lockedTemplate;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
