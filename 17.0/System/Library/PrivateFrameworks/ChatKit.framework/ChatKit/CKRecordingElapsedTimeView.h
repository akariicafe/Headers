@class NSDate, NSTimer, UILabel, UIView, NSDateComponentsFormatter;

@interface CKRecordingElapsedTimeView : UIView

@property (readonly, nonatomic) NSDateComponentsFormatter *_durationFormatter;
@property (readonly, nonatomic) UILabel *_timeLabel;
@property (readonly, nonatomic) UIView *_recordingDotView;
@property (readonly, nonatomic) NSTimer *_updateTimer;
@property (readonly, nonatomic) NSDate *_startTime;

- (void)resetTimer;
- (void)dealloc;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)endTimer;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)_endRecordingAnimation;

@end
