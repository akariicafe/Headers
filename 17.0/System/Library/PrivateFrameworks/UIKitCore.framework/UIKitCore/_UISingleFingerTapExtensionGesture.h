@class NSMutableSet;

@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {
    NSMutableSet *_trackedEvents;
}

- (void)_resetGestureRecognizer;
- (long long)_modifierFlags;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_gestureCanBeginWithEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;

@end
