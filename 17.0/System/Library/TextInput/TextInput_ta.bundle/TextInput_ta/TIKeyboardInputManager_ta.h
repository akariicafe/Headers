@interface TIKeyboardInputManager_ta : TIKeyboardInputManager {
    void **_internalToExternalTransliterator;
    void **_externalToInternalTransliterator;
    BOOL _isQWERTYLayout;
}

- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (void)dealloc;
- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)syncToLayoutState:(id)a0;
- (void)closeTransliterators;
- (void)configureTransliterators;
- (void)initTransliteratorsWithID:(id)a0;

@end
