@class CLKCComplicationDataSourceContext, CLKCComplication, CLKDevice;
@protocol CLKCComplicationDataSourceDelegate;

@interface CLKCComplicationDataSource : NSObject

@property (class, readonly, nonatomic) BOOL hasSensitiveUI;
@property (class, readonly) long long tritiumUpdatePriority;

@property (readonly, nonatomic) CLKCComplication *complication;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) CLKCComplicationDataSourceContext *context;
@property (weak, nonatomic) id<CLKCComplicationDataSourceDelegate> delegate;
@property (readonly, nonatomic) unsigned long long timelineAnimationBehavior;
@property (readonly, nonatomic) BOOL supportsTapAction;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)wantsToSkipPauseWhenEnteringTritium;

- (void)becomeActive;
- (void)pause;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (id)alwaysOnTemplate;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (void)becomeInactive;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)didTouchDownInView:(id)a0;
- (void)didTouchUpInsideView:(id)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2 context:(id)a3;
- (id)lockedTemplate;
- (id)sampleTemplate;
- (id)privacyTemplate;
- (void)getDesiredUpdateIntervalWithHandler:(id /* block */)a0;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesBeforeDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)getTimelineStartDateWithHandler:(id /* block */)a0;

@end
