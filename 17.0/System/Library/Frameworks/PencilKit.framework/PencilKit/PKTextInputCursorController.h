@class NSString, PKTextInputSettings, UIResponder, UITextCursorAssertionController;
@protocol UITextCursorAssertion, UITextInput, PKTextInputCursorControllerDelegate;

@interface PKTextInputCursorController : NSObject <PKTextInputDebugStateReporting> {
    id<UITextCursorAssertion> _nonBlinkingAssertion;
    id<UITextCursorAssertion> _nonVisibleAssertion;
    id<UITextCursorAssertion> _ghostAssertion;
    BOOL _cursorShouldFlash;
    id /* block */ _restoreAfterFlashCursorBlock;
    BOOL _lastKnownTextInputResponderWasKey;
    PKTextInputSettings *_settings;
}

@property (nonatomic, setter=_setCursorStyle:) long long cursorStyle;
@property (nonatomic, setter=_setMode:) long long mode;
@property (weak, nonatomic, setter=_setLastKnownTextInputResponder:) UIResponder<UITextInput> *_lastKnownTextInputResponder;
@property (nonatomic, setter=_setTrackedLastKnownTextInputResponderWindowIsKey:) BOOL _trackedLastKnownTextInputResponderWindowIsKey;
@property (retain, nonatomic) UITextCursorAssertionController *implicitAssertionController;
@property (nonatomic) double _lastSwitchToIdleWritingStateTime;
@property (retain, nonatomic) PKTextInputSettings *_textInputSettings;
@property (weak, nonatomic) id<PKTextInputCursorControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isCursorWeak;
@property (readonly, nonatomic) BOOL isCursorTemporarilyStrong;
@property (nonatomic) BOOL forceStrong;
@property (nonatomic) BOOL forceVisible;
@property (nonatomic) BOOL forceHidden;
@property (nonatomic) double lastElementTapToFocusTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (id)init;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)firstResponderDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (BOOL)scribbleEnabled;
- (id)_currentAssertionController;
- (void)_delayedRevokeTemporaryStrongMode;
- (void)_handleDidPerformReturn:(id)a0;
- (void)_handleUndoRedo:(id)a0;
- (id)_implicitAssertionControllerIfPossible;
- (void)_textInputSourceDidChange:(id)a0;
- (void)_updateAssertionsForCurrentState;
- (void)_updateCursorStyle;
- (id)_windowForResponder:(id)a0;
- (void)_writingStateEvaluationTimerExpired;
- (BOOL)canMakeCursorWeakForResponder:(id)a0;
- (void)customHighlightFeedbackVisibilityDidChange;
- (void)flashCursor;
- (void)invalidateGhostAssertion;
- (void)invalidateNonBlinkingAssertion;
- (void)invalidateNonVisibleAssertion;
- (void)keyWindowDidChange:(id)a0;
- (BOOL)lastKnownTextInputResponderWindowIsKey;
- (void)makeCursorStrong;
- (void)makeCursorTemporarilyStrongWhileWriting;
- (void)makeCursorTemporarilyStrongWithTimeout:(double)a0;
- (void)makeCursorWeak;
- (void)removeAllAssertions;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)resetCursorTemporarilyStrongState;
- (void)simulateFirstResponderChangeForTesting:(id)a0;
- (void)simulateResetCursorTimeout;
- (void)textInputSourceDidChange:(id)a0;
- (void)writingStateDidChange;

@end
