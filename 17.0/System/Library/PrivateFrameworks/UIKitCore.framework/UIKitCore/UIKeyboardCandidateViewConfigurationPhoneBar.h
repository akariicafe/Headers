@interface UIKeyboardCandidateViewConfigurationPhoneBar : UIKeyboardCandidateViewConfiguration

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;

@end
