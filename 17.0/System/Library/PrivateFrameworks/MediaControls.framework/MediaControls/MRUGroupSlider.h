@class MRULongPressGestureRecognizer, UIImpactFeedbackGenerator, NSString;
@protocol MRUGroupSliderDelegate;

@interface MRUGroupSlider : MRUSlider <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MRULongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) MRULongPressGestureRecognizer *longPressFeedbackGestureRecognizer;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL longPressFeedbackEnabled;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled;
@property (weak, nonatomic) id<MRUGroupSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleLongPressCancelled;
- (void)sliderLongPress:(id)a0;
- (void)sliderLongPressFeedback:(id)a0;

@end
