@class UIKeyboardScheduledTask, NSString, _UIInlineTextCompletion, UIResponder, UIInlineTextCompletionPrompt;
@protocol UITextInput, UIInlineTextCompletionControllerDelegate;

@interface UIInlineTextCompletionController : NSObject <UITextCompletionAcceptanceDelegate> {
    UIInlineTextCompletionPrompt *m_textCompletionPrompt;
}

@property (readonly, nonatomic) _UIInlineTextCompletion *textCompletion;
@property (readonly, nonatomic) _UIInlineTextCompletion *oneWordTextCompletion;
@property (readonly, nonatomic) UIResponder<UITextInput> *inputDelegate;
@property (retain, nonatomic) UIKeyboardScheduledTask *textCompletionPromptTask;
@property (copy, nonatomic) NSString *presentingTextCompletionAsMarkedText;
@property (retain, nonatomic) _UIInlineTextCompletion *candidateRemovedOnWillPerformOutput;
@property (retain, nonatomic) _UIInlineTextCompletion *acceptingTextCompletion;
@property (retain, nonatomic) _UIInlineTextCompletion *lastAcceptedTextCompletion;
@property (nonatomic, getter=isDeleting) BOOL deleting;
@property (weak, nonatomic) id<UIInlineTextCompletionControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPrompt;
@property (nonatomic) BOOL currentlyAcceptingInlineCompletionByDirectTap;
@property (readonly, nonatomic) unsigned long long inlineTextCompletionModeForTraits;

- (void).cxx_destruct;
- (void)_touchTextCompletionPromptTimer;
- (void)_clearTextCompletionPromptTimer;
- (void)_acceptTextCompletion:(id)a0 learningMode:(id)a1;
- (id)_acceptTextCompletionWithInteraction:(long long)a0 wordTerminator:(id)a1;
- (long long)_acceptTypeForInteraction:(long long)a0 wordTerminator:(id)a1;
- (long long)_acceptTypeForTypeWordTerminator:(id)a0;
- (id)_bestTextCompletion;
- (id)_candidateToUndoAcceptedTextCompletion;
- (BOOL)_deleteToUndoEnabled;
- (BOOL)_doesFirstPredictedCharacterEndWord:(id)a0;
- (unsigned long long)_inlineCompletionModeForTraitsWithCurrentPreference:(BOOL)a0;
- (BOOL)_inlineCompletionPreference;
- (BOOL)_isCompletion:(id)a0 continuingLastCompletion:(id)a1;
- (BOOL)_isRejectionWhenRemovingPromptForReason:(long long)a0;
- (id)_markedTextAttributes;
- (id)_oneWordTextCompletionFromTextCompletion:(id)a0;
- (void)_registerLearningForInlineCompletion:(id)a0 learningMode:(id)a1;
- (void)_removeTextCompletionPromptForReason:(long long)a0;
- (BOOL)_shouldAcceptFirstWordOfCandidateForWordTerminator:(unsigned int)a0;
- (BOOL)_shouldAcceptUpToNextWordOfCandidateOnWordBoundaryForInteraction:(long long)a0;
- (id)_textCompletionPromptRectsForInput:(id)a0;
- (id)_textCompletions;
- (id)_upToNextWordTextCompletionFromTextCompletion:(id)a0;
- (void)_updateTextCompletionPrompt:(id)a0 executionContext:(id)a1;
- (void)_updateTextCompletionPrompt:(id)a0 inputRects:(id)a1;
- (void)_updateTextCompletionPromptWithTextCompletion:(id)a0 parentView:(id)a1 inputRects:(id)a2;
- (void)acceptTextCompletion:(id)a0;
- (void)acceptTextCompletionWithInteraction:(long long)a0 wordTerminator:(id)a1;
- (id)acceptTextCompletionWithInteraction:(long long)a0 wordTerminator:(id)a1 outputHandledByCaller:(BOOL)a2;
- (BOOL)canUndoAcceptedTextCompletion;
- (void)didPerformKeyboardOutput:(id)a0;
- (void)removeTextCompletionPrompt;
- (id)textCompletionPrompt;
- (void)undoAcceptedTextCompletionExecutionContext:(id)a0;
- (void)updateTextCompletionDisplay;
- (void)updateTextCompletionPrompt;
- (void)updateTextCompletionPromptExecutionContext:(id)a0;
- (void)willAcceptPredictiveInput:(id)a0;
- (void)willPerformKeyboardOutput:(id)a0;

@end
