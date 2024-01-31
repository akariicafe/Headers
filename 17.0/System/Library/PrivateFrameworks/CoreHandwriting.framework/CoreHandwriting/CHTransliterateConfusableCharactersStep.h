@class NSArray, NSLocale;

@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStepModifyingOriginalTokens {
    NSArray *_characterTransliterations;
    struct _LXLexicon { } *_staticLexicon;
    struct _LXLexicon { } *_customLexicon;
    NSLocale *_locale;
}

- (void).cxx_destruct;
- (id)initWithStaticLexicon:(struct _LXLexicon { } *)a0 customLexicon:(struct _LXLexicon { } *)a1 locale:(id)a2;
- (id)process:(id)a0 options:(id)a1;

@end
