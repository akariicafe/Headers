@class NSMutableSet, NSString, CLKCComplicationDataSource, TLTimeline, CLKComplicationTemplate, NSDate, NTKTimelineDataOperation;

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, TLTimelineDelegate, CLKUITimeTravel> {
    CLKCComplicationDataSource *_dataSource;
    NSDate *_timeTravelDate;
    BOOL _supportsTimeTravelForward;
    NSDate *_timelineEndDate;
    BOOL _hasQueuedAnimation;
    unsigned long long _queuedAnimation;
    TLTimeline *_timeline;
    NTKTimelineDataOperation *_currentOperation;
    NSMutableSet *_suspendedRightBoundaryDates;
    NSMutableSet *_delayedBlocks;
    CLKComplicationTemplate *_switcherTemplate;
    BOOL _hasBeenLive;
    long long _dataSourceState;
}

@property (readonly, nonatomic) CLKComplicationTemplate *sharingTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;
+ (Class)complicationDataSourceClassForComplication:(id)a0 family:(long long)a1 device:(id)a2;

- (void)_deactivate;
- (void)_activate;
- (void).cxx_destruct;
- (void)_updateAllDisplayWrappersToCurrentTemplateWithReason:(long long)a0 animation:(unsigned long long)a1;
- (void)_startExtendOperationIfNecessaryForTimeline:(id)a0 withDate:(id)a1 minBuffer:(double)a2;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_cancelDelayedBlocks;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)a0 entries:(id)a1;
- (void)_completeSetupOperationWithEndDate:(id)a0 currentEntry:(id)a1;
- (id)_currentEntry;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_queueAnimationForNextUpdate:(unsigned long long)a0;
- (void)_requestDataSourceToUpdateToState:(long long)a0;
- (void)_resetTimelineForCachingChange;
- (void)_startExtendRightOperationFromDate:(id)a0;
- (void)_startSetupOperationIfPossible;
- (void)_suspendRightBoundaryDate:(id)a0;
- (void)_updateAllDisplayWrappersToCurrentTemplateWithReason:(long long)a0;
- (void)_updateDimStateForCurrentTimeline;
- (void)_updateDisplayWrapper:(id)a0 toCurrentTemplateWithReason:(long long)a1 animation:(unsigned long long)a2;
- (void)_updateIsComplicationActive:(BOOL)a0;
- (id)activeDisplayTemplateForDisplayWrapper:(id)a0;
- (void)addDisplayWrapper:(id)a0;
- (id)alwaysOnTemplate;
- (void)appendEntries:(id)a0;
- (void)appendEntries:(id)a0 withTritiumUpdatePriority:(long long)a1;
- (id)complicationApplicationIdentifier;
- (void)didTouchDownInView:(id)a0;
- (void)didTouchUpInsideView:(id)a0;
- (void)entriesDidChangeInTimeline:(id)a0;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)a0 variant:(id)a1 device:(id)a2;
- (void)invalidateEntries;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)a0;
- (void)invalidateSwitcherTemplate;
- (id)lockedTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)performTapActionForDisplayWrapper:(id)a0;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setIgnoreNewTemplates:(BOOL)a0;
- (void)setShowsLockedUI:(BOOL)a0;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)setTimelineEndDate:(id)a0;
- (void)timeline:(id)a0 didChangeNowEntryFrom:(id)a1 to:(id)a2;

@end
