@interface UIKeyboardCameraBasePresentationController : UIPresentationController

@property (readonly, nonatomic) BOOL updatesGuideDuringRotation;
@property (nonatomic) BOOL presentingOverKeyboard;

- (void)postNotificationsForType:(unsigned long long)a0 forStart:(BOOL)a1;
- (void)postNotificationsForType:(unsigned long long)a0 from:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forStart:(BOOL)a3;

@end
