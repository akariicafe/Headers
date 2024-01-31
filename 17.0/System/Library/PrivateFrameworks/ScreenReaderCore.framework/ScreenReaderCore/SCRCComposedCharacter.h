@interface SCRCComposedCharacter : NSObject {
    unsigned long long _originalRepresentationLength;
    unsigned long long _normalFormDRepresentationLength;
    unsigned long long _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString { } *_originalCombinedCharacter;
}

- (void)dealloc;
- (unsigned long long)length;
- (BOOL)isEqual:(id)a0;
- (struct __CFString { } *)originalString;
- (int)charAtIndex:(unsigned long long)a0;
- (id)initWithCharacter:(int)a0;
- (unsigned long long)originalLength;
- (void)_buildFormD;
- (void)_buildFormKC;
- (BOOL)_formKCContaintsUpperCase;
- (id)_initWithCharacter:(int)a0;
- (id)_initWithComposedCharacter:(struct __CFString { } *)a0;
- (id)_initWithSimpleCharacter:(int)a0;
- (BOOL)containsUpperCase;
- (struct __CFString { } *)copyUnicodeDescriptionString;
- (int)formDCharAtIndex:(unsigned long long)a0;
- (unsigned long long)formDLength;
- (int)formKCCharAtIndex:(unsigned long long)a0;
- (unsigned long long)formKCLength;
- (id)initWithComposedCharacter:(struct __CFString { } *)a0;
- (BOOL)isEqualToUChar32:(int)a0;
- (int)originalFromCharAtIndex:(unsigned long long)a0;

@end
