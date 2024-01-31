@protocol _UIFluidSliderFeedbackPlayer;

@interface _UIFluidSliderFeedbackConductor : NSObject

@property (retain, nonatomic) id<_UIFluidSliderFeedbackPlayer> _directFeedbackPlayer;
@property (retain, nonatomic) id<_UIFluidSliderFeedbackPlayer> _indirectFeedbackPlayer;
@property (nonatomic) double _lastValue;
@property (nonatomic) unsigned long long _detentCount;
@property (nonatomic) long long _currentRegion;
@property (nonatomic) double epsilon;

- (void).cxx_destruct;
- (void)_playFeedback:(long long)a0 forUpdateType:(long long)a1 value:(double)a2;
- (id)initWithDetentCount:(unsigned long long)a0 coordinateSpace:(id)a1 indirectFeedbackPlayer:(id)a2;
- (void)moveToValue:(double)a0 withUpdateType:(long long)a1 forced:(BOOL)a2;

@end
