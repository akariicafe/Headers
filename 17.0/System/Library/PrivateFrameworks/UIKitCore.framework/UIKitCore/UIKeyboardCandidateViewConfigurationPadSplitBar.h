@interface UIKeyboardCandidateViewConfigurationPadSplitBar : UIKeyboardCandidateViewConfigurationPadBar

- (id)initialState;
- (id)extendedState;
- (double)candidateDefaultFontSize;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldAlwaysShowSortControl;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;

@end
