@class HUQuickControlPanningContext, UIGestureRecognizer;
@protocol HUQuickControlSliderGestureTransformerDelegate;

@interface HUQuickControlSliderGestureTransformer : NSObject

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic) double referenceSliderValue;
@property (nonatomic) double currentSliderValue;
@property (nonatomic) struct CGPoint { double x; double y; } referenceTouchLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchLocation;
@property (nonatomic) double accumulatedDragDistance;
@property (nonatomic) BOOL hasRecognizedSignificantSliderValueChange;
@property (weak, nonatomic) id<HUQuickControlSliderGestureTransformerDelegate> delegate;
@property (readonly, nonatomic) HUQuickControlPanningContext *context;
@property (nonatomic) BOOL ignoreTouches;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleGesturePan:(id)a0;
- (void)_handleSliderValuePan:(struct CGPoint { double x0; double x1; })a0;
- (double)_rawSliderValueForLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldIgnoreAllGestures;
- (id)initWithGestureRecognizer:(id)a0 context:(id)a1;

@end
