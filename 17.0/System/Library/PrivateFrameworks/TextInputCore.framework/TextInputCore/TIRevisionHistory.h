@class NSString, TIRevisionHistoryToken, NSMutableArray, TILRUDictionary;
@protocol TIRevisionHistoryDelegate;

@interface TIRevisionHistory : NSObject

@property (copy, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSMutableArray *tokenization;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long tokenIndex; unsigned long long documentLocation; } currentTokenIterator;
@property (readonly, nonatomic) void *tokenizer;
@property (retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken;
@property (nonatomic) BOOL shouldReportRevisionToDP;
@property (nonatomic) BOOL isDeletingBackwards;
@property (nonatomic) BOOL isRapidDeleteActive;
@property (nonatomic) id<TIRevisionHistoryDelegate> delegate;
@property (retain, nonatomic) TILRUDictionary *recentAutocorrections;
@property (retain, nonatomic) TILRUDictionary *autocorrectionHistory;

+ (id)documentStateTrimmedToSentenceForState:(id)a0;

- (id)documentState;
- (id)currentWord;
- (id)init;
- (void)rejectCandidate:(id)a0 forInput:(id)a1 hint:(int)a2;
- (void)dealloc;
- (BOOL)validateTokenizationForRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 forRevision:(id)a2;
- (id)initWithLocale:(id)a0;
- (void)pushSelectedTextToTokenizerForRevision:(id)a0;
- (BOOL)originalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 matchesRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })popSelectedTextFromTokenizer;
- (id)currentUserTyping;
- (BOOL)matchesDocumentState:(id)a0;
- (id)nonEmptyTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)matchesContextAfterSelection:(id)a0;
- (void)syncToDocumentState:(id)a0;
- (id)contextForTokenAtIndex:(unsigned long long)a0;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromDocumentLocation:(unsigned long long)a2;
- (void)mergeTokenizationsForRevision:(id)a0;
- (void)replaceSelectionWithText:(id)a0 negativeLearningHint:(int)a1 selectedTokenReplacementHandler:(id /* block */)a2;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deletionRangeToObtainDocumentState:(id)a0;
- (id)wordTokenContainingSelection;
- (void)resetToDocumentState:(id)a0;
- (void)rejectToken:(id)a0 contextTokens:(id)a1 negativeLearningHint:(int)a2 withRevisedToken:(id)a3;
- (void)handleRevisedTokenString:(id)a0 withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 forRevision:(id)a2;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })nextTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)acceptTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)migrateUserTypingFromDeletedTokens:(id)a0 toInsertedTokens:(id)a1 withUsageLearningMask:(unsigned int)a2 usageTrackingMask:(unsigned int)a3;
- (BOOL)matchesContextBeforeSelection:(id)a0;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withTokenHandler:(id /* block */)a1;
- (void)enumerateSentenceStemUsingBlock:(id /* block */)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isWordToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertText:(id)a0;
- (void)addRevisedTokenString:(id)a0 withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 inDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 toRevision:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withDeletedCharacterCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)rejectTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 negativeLearningHint:(int)a1 newRevision:(id)a2;
- (BOOL)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)deleteBackward;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })previousTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 withRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRevision:(id)a2;
- (void)enumerateSentenceStemUsingIteratorBlock:(id /* block */)a0;
- (void)annotateTokensCreatedFromDocumentState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })inputRangeForReplacement:(id)a0;
- (BOOL)matchesSelectedText:(id)a0;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iteratorUpperBoundForSelectionStart;
- (void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)a0;
- (void)acceptToken:(id)a0 contextTokens:(id)a1 saveToDifferentialPrivacy:(int)a2;
- (void)acceptCurrentSentence;
- (void)acceptText:(id)a0 isAutocorrection:(BOOL)a1 isAutoshifted:(BOOL)a2;

@end
