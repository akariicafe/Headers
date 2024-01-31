@class NSNumber;

@interface TIKeyboardInputManager_vi : TIKeyboardInputManager_mul {
    void **m_transliterator;
    BOOL m_useInternalIndex;
    NSNumber *m_lexiconID;
}

@property (readonly, nonatomic) unsigned int lexiconID;

+ (void)cleanupUnikey;
+ (void)setupUnikey;

- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (void)setInput:(id)a0 withIndex:(unsigned int)a1;
- (void)dealloc;
- (id)internalStringToExternal:(id)a0;
- (int)vietnameseType;
- (BOOL)usesRetrocorrection;
- (void *)initImplementation;
- (id)decomposeTelex:(id)a0;
- (unsigned long long)deleteLengthForString:(id)a0;
- (id)internalStringToExternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (BOOL)canHandleCharacter:(unsigned short)a0;
- (void).cxx_destruct;
- (id)externalStringToInternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (BOOL)shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;
- (void **)createTransliterator;
- (BOOL)doesComposeText;
- (BOOL)inputTypeSupportsDecomposition;
- (void)updateUnikeyWithVietnameseType:(int)a0;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;

@end
