@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedState;
- (BOOL)allowsPullDownGesture;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)willCoverKeyboardLayout;

@end
