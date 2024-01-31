@class UIImpactFeedbackGenerator, NSString, UILabel, DBSCheckmarkView, DBSDeviceDisplayZoomAnimationView;
@protocol DBSDisplayZoomOptionViewDelegate;

@interface DBSDisplayZoomOptionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *optionNameLabel;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (retain, nonatomic) DBSDeviceDisplayZoomAnimationView *_packageView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=highlighted) BOOL highlight;
@property (readonly, nonatomic) unsigned long long displayZoomOption;
@property (weak, nonatomic) id<DBSDisplayZoomOptionViewDelegate> delegate;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_configureView;
- (void)_userDidTapOnView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayZoomOption:(unsigned long long)a1;

@end
