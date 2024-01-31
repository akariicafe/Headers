@interface UIKeyboardCandidateViewConfigurationPadFloatingBar : UIKeyboardCandidateViewConfigurationPhoneBarDown

- (id)initialState;
- (id)extendedState;
- (BOOL)allowsPullDownGesture;
- (BOOL)willCoverKeyboardLayout;

@end
