@class TIWordSearch;

@interface TIKeyboardInputManager_ko : TIKeyboardInputManager_zh_ja {
    struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *_batchConverter;
    BOOL _deleteSyllable;
    TIWordSearch *_wordSearch;
}

@property (readonly, nonatomic) struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *batchConverter;

+ (Class)wordSearchClass;

- (BOOL)usesContinuousPath;
- (void)clearInput;
- (void)dealloc;
- (id)internalStringToExternal:(id)a0;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (void *)initImplementation;
- (void).cxx_destruct;
- (void)setInputIndex:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (BOOL)doesComposeText;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)setInput:(id)a0;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (unsigned long long)additionalAnalysisOptions;
- (BOOL)canTypeAndPathSimultaneously;
- (BOOL)dictionaryUsesExternalEncoding;
- (void)keyLayoutWillChangeTo:(id)a0 from:(id)a1;
- (void)loadFavoniusTypingModel;
- (unsigned int)pathedWordSeparatorChar;
- (id)rawInputString;
- (void)setAutoCorrects:(BOOL)a0;
- (void)setLearnsCorrection:(BOOL)a0;
- (BOOL)shouldResample;
- (BOOL)shouldRescaleTouchPoints;
- (BOOL)supportsLearning;
- (void)syncToLayoutState:(id)a0;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (BOOL)usesComposingInput;
- (BOOL)usesMarkedTextForInput;
- (id)validCharacterSetForAutocorrection;
- (struct USet { } *)validUSetForAutocorrection;
- (BOOL)whiteSpaceEndsSentence;
- (id)wordSearch;
- (id)composeJamo:(id)a0;

@end
