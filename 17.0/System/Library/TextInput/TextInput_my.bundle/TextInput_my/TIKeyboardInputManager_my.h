@interface TIKeyboardInputManager_my : TIKeyboardInputManager

- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (BOOL)doesComposeText;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;

@end
