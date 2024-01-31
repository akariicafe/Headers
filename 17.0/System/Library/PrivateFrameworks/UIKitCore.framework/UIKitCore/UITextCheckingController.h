@class NSTimer, UITextChecker;
@protocol UITextCheckingClient;

@interface UITextCheckingController : NSObject {
    id<UITextCheckingClient> _client;
    UITextChecker *_textChecker;
    NSTimer *_pauseTimer;
    double _lastPauseTimer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRangeFromPreviousUnchecked;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousCheckedSentenceRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousCheckedSelectedRange;
    long long _prechangeCheckingSequenceNumber;
    struct __tccClientFlags { unsigned char respondsToAutocorrectionType : 1; unsigned char respondsToSpellCheckingType : 1; unsigned char respondsToSmartQuotesType : 1; unsigned char respondsToSmartDashesType : 1; unsigned char respondsToSmartInsertDeleteType : 1; unsigned char respondsToContinuousSpellCheckingEnabled : 1; } _tccClientFlags;
}

@property (readonly) id<UITextCheckingClient> client;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)removeSpellingMarkersFromWordInRange:(id)a0;
- (id)initWithClient:(id)a0;
- (void)applyGrammarCheckingIndication;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeForTextRange:(id)a0;
- (id)textChecker;
- (id)validAnnotations;
- (void)preheatTextChecker;
- (id)annotatedSubstringForRange:(id)a0;
- (BOOL)continuousSpellCheckingEnabled;
- (void)dealloc;
- (void)didChangeTextInRange:(id)a0;
- (void)considerTextCheckingForRange:(id)a0;
- (void)invalidate;
- (void)removeGrammarAnnotationFromWordAtPosition:(id)a0;
- (void)_addCorrectionUnderlinesForCandidates:(id)a0 ranges:(id)a1 inSentenceRange:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })terminatedSentenceRangeInTextRange:(id)a0;
- (BOOL)foundApostropheAfterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)rangeIsSuitableForGrammarAutocorrections:(id)a0;
- (void)feedbackForGrammarMarkersFromWordsInRange:(id)a0 replacementText:(id)a1;
- (void)invalidateTimers;
- (void)insertedTextInRange:(id)a0;
- (void).cxx_destruct;
- (void)checkGrammarForSentenceInRange:(id)a0 onPause:(BOOL)a1;
- (BOOL)performFinalGrammarChecking;
- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_addGrammarAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1 inAnnotatedString:(id)a2;
- (void)_pauseTimer:(id)a0;
- (id)annotatedStringWithValidAnnotationsForAnnotatedString:(id)a0;
- (BOOL)performFinalGrammarCheckingWithAutocorrection:(BOOL)a0;
- (void)removeGrammarMarkersFromWordsInRange:(id)a0;
- (void)willReplaceTextInRange:(id)a0 withText:(id)a1;
- (void)_handleGrammarCheckingResults:(id)a0 sequenceNumber:(long long)a1 forSentenceRange:(id)a2 autocorrectionCount:(unsigned long long *)a3;
- (void)didChangeSelectionFromRange:(id)a0;
- (void)checkSpellingForWordInRange:(id)a0;

@end
