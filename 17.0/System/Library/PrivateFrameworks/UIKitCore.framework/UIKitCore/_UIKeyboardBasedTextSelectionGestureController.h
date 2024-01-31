@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (Class)textInteractionClass;
- (BOOL)allowOneFingerDeepPress;
- (void)_cleanupDeadGesturesIfNecessary;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (BOOL)oneFingerForcePressShouldCancelTouchesInView;

@end
