@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) double pressEventEndTimestamp;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)voiceCommandButtonTapDuration;

@end
