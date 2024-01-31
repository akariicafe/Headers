@class NSString, CLLocation;

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource {
    NSString *_token;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
    unsigned long long _vista;
    BOOL _listeningForNotifications;
}

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)becomeActive;
- (void)_startObserving;
- (void)pause;
- (void)dealloc;
- (void)_invalidate;
- (void)resume;
- (void).cxx_destruct;
- (void)_stopObserving;
- (id)_currentTimelineEntryWithIdealizedDate:(BOOL)a0;
- (void)_handleLocationUpdate:(id)a0 anyLocation:(id)a1;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (void)becomeInactive;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
