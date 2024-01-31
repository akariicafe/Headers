@interface _UIKeyboardUsageTracking : NSObject

+ (void)appAutofillDetectedIncrement;
+ (void)showVariantsIncrement;
+ (void)keyboardPerformanceFromTouchStart:(double)a0 until:(double)a1;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)letterCaseToggleIncrement;
+ (void)showLowercaseKeyplanePreference:(BOOL)a0;
+ (void)keyboardSupportsTouch:(BOOL)a0;
+ (void)selectedPredictiveInputCandidate:(id)a0 isAutocorrection:(BOOL)a1 index:(unsigned long long)a2;
+ (void)variantDeleteIncrement;
+ (void)predictionViewState:(BOOL)a0 forInputMode:(id)a1;
+ (void)redoKeyCount;
+ (void)undoKeyCount;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)a0;
+ (void)keyboardGestureOneFingerForcePan:(BOOL)a0;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)keyboardSetToInputMode:(id)a0 fromPrevious:(id)a1;
+ (void)panAlternateKeyFlickDownCount;
+ (void)restAndTypeTriggered;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)inputSwitcherSetPredictionPreference:(BOOL)a0;
+ (void)singleStringKeyFlickUpCount;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)a0;
+ (void)keyboardGestureTwoFingerTap:(BOOL)a0 withTapCount:(int)a1;
+ (void)keyboardPerformanceFromTouchRelease:(double)a0 until:(double)a1;
+ (void)keyboardGestureOneFingerForcePress:(BOOL)a0 withPressCount:(int)a1;
+ (void)appAutofillDetectedDecrement;
+ (void)dualStringsKeyFlickUpCount;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)a0;
+ (void)keyboardExtensionsOnDevice;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)appAutofillFilled;
+ (void)showCharacterPreviewPreference:(BOOL)a0;
+ (void)appAutofillExtraKeyTapped;
+ (void)keyboardReachabilityDistribution:(double)a0;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)keyboardTotalOnScreenTime:(double)a0 orientation:(long long)a1;
+ (void)normalPunctuationKeyCount;

@end
