@protocol AXRVoiceOverTouchPadViewDelegate;

@interface AXRVoiceOverTouchPadView : UIView

@property (weak, nonatomic) id<AXRVoiceOverTouchPadViewDelegate> delegate;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityGesturePracticeRegion;
- (void)_accessibilitySetCurrentGesture:(id)a0;

@end
