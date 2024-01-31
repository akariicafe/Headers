@interface WFKeyboard : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) long long animationCurve;
@property (readonly, nonatomic) double animationDuration;

+ (id)sharedKeyboard;
+ (void)beginObservingKeyboardNotifications;

- (id)init;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboardFrameInView:(id)a0;
- (void)keyboardWillChangeVisible:(id)a0;

@end
