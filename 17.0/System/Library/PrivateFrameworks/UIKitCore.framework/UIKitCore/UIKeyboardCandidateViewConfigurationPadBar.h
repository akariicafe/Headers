@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedState;
- (id)arrowButtonSeparatorImage;
- (double)candidateDefaultFontSize;
- (id)edgeSeparatorImage;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldAlwaysShowSortControl;
- (BOOL)shouldResizeKeyboardBackdrop;

@end
