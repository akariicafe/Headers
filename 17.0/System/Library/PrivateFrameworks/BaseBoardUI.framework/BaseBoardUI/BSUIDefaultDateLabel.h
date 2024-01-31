@class NSString, NSTimer, NSDate;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {
    NSDate *_timeZoneRelativeEndDate;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
}

@property (readonly, nonatomic) NSDate *timeZoneRelativeStartDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (weak, nonatomic) id<BSUIDateLabelDelegate> delegate;
@property (nonatomic) long long labelType;
@property (nonatomic) BOOL isTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTimerFired:(id)a0;
- (BOOL)isEffectiveAllDay;
- (id)init;
- (void)dealloc;
- (void)setTimeZoneRelativeStartDate:(id)a0 absoluteStartDate:(id)a1;
- (void)update;
- (void)prepareForReuse;
- (void)setEndDate:(id)a0 withTimeZone:(id)a1;
- (void)_forceUpdate;
- (void)setStartDate:(id)a0 withTimeZone:(id)a1;
- (void)setTimeZoneRelativeEndDate:(id)a0;
- (id)constructLabelString;
- (void).cxx_destruct;
- (void)stopCoalescingUpdates;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)a0;
- (void)updateTextIfNecessary;
- (void)startCoalescingUpdates;

@end
