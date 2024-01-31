@class CHStringOVSChecker, CHSpellChecker, NSLocale, NSDictionary, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep {
    BOOL _shouldAutoCapitalize;
    BOOL _shouldAutoCorrect;
    BOOL _shouldCreatePseudoTokens;
    int _autoCapitalizationMode;
    NSLocale *_locale;
    struct _LXLexicon { } *_customLexicon;
    struct _LXLexicon { } *_phraseLexicon;
    struct _LXLexicon { } *_customPhraseLexicon;
    void *_lmVocabulary;
    CHStringOVSChecker *_ovsStringChecker;
    CHSpellChecker *_spellChecker;
    NSDictionary *_textReplacements;
    NSCharacterSet *_consumableStrokesCharSet;
    NSCharacterSet *_fullWidthPunctuationThatExpectsUppercaseAfter;
    NSCharacterSet *_punctuationThatExpectsUppercaseAfter;
}

@property (nonatomic) struct _LXLexicon { } *staticLexicon;

+ (id)validatedTokenForCorrectedToken:(id)a0 rawToken:(id)a1 autoCapitalizationMode:(int)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAutoCapitalizationMode:(int)a0 shouldAutoCorrect:(BOOL)a1 shouldAutoCapitalize:(BOOL)a2 shouldCreatePseudoTokens:(BOOL)a3 locale:(id)a4 staticLexicon:(struct _LXLexicon { } *)a5 customLexicon:(struct _LXLexicon { } *)a6 phraseLexicon:(struct _LXLexicon { } *)a7 customPhraseLexicon:(struct _LXLexicon { } *)a8 spellChecker:(id)a9 lmVocabulary:(void *)a10 ovsStringChecker:(id)a11 textReplacements:(id)a12;
- (id)process:(id)a0 options:(id)a1;

@end
