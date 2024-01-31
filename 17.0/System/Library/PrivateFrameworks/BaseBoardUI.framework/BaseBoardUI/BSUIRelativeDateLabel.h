@class NSString, BSRelativeDateTimer, BSRelativeDateTimerFireInfo;

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <_UIAlwaysOnEnvironmentObserver, BSRelativeDateTimerDelegate> {
    BSRelativeDateTimer *_relativeDateTimer;
    unsigned long long _value;
    unsigned long long _resolution;
    long long _comparedToNow;
    BOOL _invalidateTimelineOnReuse;
}

@property (copy, nonatomic, getter=_overrideTimerFireInfo, setter=_setOverrideTimerFireInfo:) BSRelativeDateTimerFireInfo *overrideTimerFireInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (id)_timelinesForDateInterval:(id)a0;
- (void)dealloc;
- (void)_updateWithFrameSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)setTimeZoneRelativeStartDate:(id)a0 absoluteStartDate:(id)a1;
- (void)prepareForReuse;
- (void)timerFiredWithValue:(unsigned long long)a0 forResolution:(unsigned long long)a1 comparedToNow:(long long)a2;
- (void)_timelinesForDateInterval:(id)a0 completion:(id /* block */)a1;
- (void)_updateWithFrameSpecifier:(id)a0;
- (id)constructLabelString;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
