@class UILongPressGestureRecognizer, NSString, UIView;
@protocol CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerDelegate, CAMBarsAccessibilityHUDManagerGestureProvider;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<CAMBarsAccessibilityHUDManagerDelegate> delegate;
@property (weak, nonatomic) UIView<CAMBarsAccessibilityHUDManagerGestureProvider, CAMAccessibilityHUDItemProvider> *view;
@property (retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleAccessibilityLongPressGesture:(id)a0;
- (id)initWithView:(id)a0 delegate:(id)a1 cancelsTouchesInView:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })locationOfAccessibilityGestureInView:(id)a0;
- (void)preferredContentSizeChanged;

@end
