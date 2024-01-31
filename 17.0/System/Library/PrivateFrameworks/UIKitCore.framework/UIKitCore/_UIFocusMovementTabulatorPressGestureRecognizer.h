@class UIPress;

@interface _UIFocusMovementTabulatorPressGestureRecognizer : _UIFocusMovementPressGestureRecognizer

@property (retain, nonatomic) UIPress *trackingPress;

- (void)reset;
- (BOOL)_shouldReceivePress:(id)a0;
- (void).cxx_destruct;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)a0;

@end
