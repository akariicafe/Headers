@class TIWordSearch, NSString, NSArray, TIKeyboardCandidate, NSMutableArray;
@protocol TIMarkedTextBuffer;

@interface TIKeyboardInputManager_ja_Edit : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) NSMutableArray *mutableSegments;
@property (retain, nonatomic) id<TIMarkedTextBuffer> kanaString;
@property (readonly, nonatomic) NSString *prefixString;
@property (nonatomic) long long escapeKeyPressed;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) TIKeyboardCandidate *inlineCandidate;
@property (readonly, nonatomic) NSString *rawInputString;
@property (nonatomic) BOOL shouldCancelIfPhraseBoundaryChanged;

- (unsigned long long)phraseBoundary;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (BOOL)delayedCandidateList;
- (void)dealloc;
- (id)keyEventMap;
- (id)inputString;
- (id)keyboardBehaviors;
- (unsigned int)inputCount;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)a0;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)usesLiveConversion;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)loadDictionaries;
- (id)wordCharacters;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)loadFavoniusTypingModel;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)wordSearch;
- (BOOL)handleSpaceKey:(id)a0;
- (BOOL)handleBackspace:(id)a0;
- (BOOL)handleCancelEditMode:(id)a0;
- (BOOL)handleEsc:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 wordSearch:(id)a3 romajiMode:(BOOL)a4 conversionEnabled:(BOOL)a5;
- (unsigned int)rawInputIndex;
- (void)revertLastSegment;
- (void)setRawInputString:(id)a0;
- (id)transliterate:(id)a0;

@end
