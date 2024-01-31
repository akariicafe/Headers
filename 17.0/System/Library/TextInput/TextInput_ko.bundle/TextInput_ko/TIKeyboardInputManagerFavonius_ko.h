@interface TIKeyboardInputManagerFavonius_ko : TIKeyboardInputManager {
    struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *_batchConverter;
    BOOL _deleteSyllable;
}

@property (readonly, nonatomic) struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *batchConverter;

- (void)clearInput;
- (void)dealloc;
- (id)internalStringToExternal:(id)a0;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (void *)initImplementation;
- (void)setInputIndex:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (BOOL)doesComposeText;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)setInput:(id)a0;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)supportsLearning;
- (void)syncToLayoutState:(id)a0;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)composeJamo:(id)a0;

@end
