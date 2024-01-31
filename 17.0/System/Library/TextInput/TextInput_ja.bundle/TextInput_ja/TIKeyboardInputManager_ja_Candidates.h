@class TIWordSearch, NSString, TIKeyboardCandidate, TICandidateSorter;

@interface TIKeyboardInputManager_ja_Candidates : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) TICandidateSorter *candidateSorter;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) BOOL showsPartialCandidate;
@property (nonatomic) BOOL autoSelectFirstCandidate;
@property (nonatomic) NSString *autoSelectCandidate;
@property (nonatomic) long long autoSelectTransliterateCandidate;
@property (nonatomic) BOOL hardwareKeyboardMode;

+ (unsigned long long)sortFromSortTitle:(id)a0;
+ (id)sortTitleFromSort:(unsigned long long)a0;

- (BOOL)delayedCandidateList;
- (id)keyboardConfiguration;
- (void).cxx_destruct;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)usesLiveConversion;
- (void)loadDictionaries;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)indexTitlesForGroupTitles:(id)a0 sortingMethod:(id)a1;
- (void)loadFavoniusTypingModel;
- (id)sortingMethods;
- (BOOL)supportsCandidateGeneration;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)titleForSortingMethod:(id)a0;
- (id)wordSearch;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (long long)indexFromTransliterationType:(long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2;
- (BOOL)makeCandidatesWithInputString:(id)a0 autoCommitString:(id)a1 contextString:(id)a2 predictionEnabled:(BOOL)a3 reanalysisMode:(BOOL)a4 singlePhrase:(BOOL)a5 geometoryModelData:(id)a6;
- (id)transliterationCandidates;
- (long long)transliterationCandidatesCount;

@end
