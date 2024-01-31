@class UIColor, CAShapeLayerAnimated, UIImageView, UIActivityIndicatorView, UIImpactFeedbackGenerator, NSDate;
@protocol AVTRecordingButtonLongPressDelegate;

@interface AVTRecordingButton : UIButton

@property (retain, nonatomic) CAShapeLayerAnimated *outerCircle;
@property (retain, nonatomic) CAShapeLayerAnimated *innerCircle;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL isTrackingLongPress;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) NSDate *lastFeedbackSent;
@property (weak, nonatomic) id<AVTRecordingButtonLongPressDelegate> longPressDelegate;
@property (nonatomic) BOOL forceUsePhoneStyle;
@property (nonatomic, setter=setUIState:) unsigned long long uiState;
@property (retain, nonatomic) UIColor *centerCircleColor;
@property (nonatomic) BOOL ignoresLongPress;

- (void)configure;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)endLongPress:(BOOL)a0;
- (void)sendHapticFeedbackIfNeeded;
- (void)startLongPress;

@end
