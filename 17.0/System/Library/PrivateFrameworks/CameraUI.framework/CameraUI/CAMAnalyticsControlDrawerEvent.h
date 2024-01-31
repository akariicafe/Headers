@class NSMutableSet;

@interface CAMAnalyticsControlDrawerEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) long long _openingReason;
@property (nonatomic) long long _dismissingReason;
@property (nonatomic) long long _openingControlType;
@property (nonatomic) BOOL _hasOpeningControlType;
@property (nonatomic) long long _dismissingControlType;
@property (nonatomic) BOOL _hasDismissingControlType;
@property (readonly, nonatomic) long long _captureMode;
@property (readonly, nonatomic) long long _devicePosition;
@property (readonly, nonatomic) double _startTime;
@property (nonatomic) double _duration;
@property (readonly, nonatomic) NSMutableSet *_changedControlTypes;

- (void)publish;
- (id)eventName;
- (void).cxx_destruct;
- (void)didChangeValueForControlType:(long long)a0;
- (void)dismissedControlDrawerWithReason:(long long)a0;
- (id)initWithReason:(long long)a0 captureMode:(long long)a1 devicePosition:(long long)a2;
- (void)setDismissingControlType:(long long)a0;
- (void)setOpeningControlType:(long long)a0;

@end
