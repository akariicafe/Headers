@interface CHStringOVSChecker : NSObject {
    struct _CFBurstTrie { } *_ovsTrie;
    unsigned int _flagsFilter;
    struct _LXLexicon { } *_staticLexicon;
    struct _LXLexicon { } *_customLexicon;
    void /* function */ *_stringNormalizationFunction;
}

- (void)dealloc;
- (id)initWithTrie:(struct _CFBurstTrie { } *)a0 staticLexicon:(struct _LXLexicon { } *)a1 customLexicon:(struct _LXLexicon { } *)a2 flags:(unsigned int)a3 stringNormalizationFunction:(void /* function */ *)a4;
- (BOOL)isInappropriateLexiconEntry:(struct _LXEntry { } *)a0;
- (BOOL)isInappropriateString:(id)a0;
- (BOOL)isInappropriateTokenID:(unsigned int)a0;

@end
