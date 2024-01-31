@class CHSpellChecker, NSLocale;

@interface CHSpellCorrectionCandidatesStep : CHPostprocessingStep {
    NSLocale *_locale;
    CHSpellChecker *_spellChecker;
    struct _LXLexicon { } *_staticLexicon;
    struct _LXLexicon { } *_customLexicon;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 spellChecker:(id)a1 staticLexicon:(struct _LXLexicon { } *)a2 customLexicon:(struct _LXLexicon { } *)a3;
- (id)process:(id)a0 options:(id)a1;

@end
