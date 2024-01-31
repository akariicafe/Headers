@class NSArray, TIKeyboardCandidate, NSHashTable, NSMutableDictionary, TIAutocorrectionList;

@interface UIKeyboardAutocorrectionController : NSObject {
    unsigned long long _signpostToken;
    BOOL _requestedAutocorrection;
    BOOL _needsAutocorrection;
    BOOL _hasPendingAutocorrection;
    NSHashTable *_autocorrectionObservers;
    NSMutableDictionary *_recentCandidates;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) NSArray *textCompletions;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;
@property (readonly, nonatomic) BOOL requestedAutocorrection;
@property (nonatomic) unsigned long long maximumNumberOfCandidates;
@property (readonly, nonatomic) BOOL hasActiveObservers;

- (id)init;
- (void)clearAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(id)a0;
- (void)updateAfterShiftStateChange;
- (BOOL)hasAutocorrection;
- (BOOL)hasAutofillCandidates;
- (void)addAutocorrectionObserver:(id)a0;
- (BOOL)hasContinuousPathConversions;
- (id)storedListForCandidate:(id)a0;
- (BOOL)hasTextSuggestionCandidates;
- (void)setNeedsAutocorrection;
- (void).cxx_destruct;
- (void)clearAutofillAndTextSuggestions;
- (void)removeAutocorrectionObserver:(id)a0;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)a0;
- (BOOL)hasProactiveCandidates;

@end
