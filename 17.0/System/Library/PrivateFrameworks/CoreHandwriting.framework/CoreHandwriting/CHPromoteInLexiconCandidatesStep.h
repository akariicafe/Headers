@interface CHPromoteInLexiconCandidatesStep : CHPostprocessingStep {
    struct _LXLexicon { } *_staticLexicon;
    struct _LXLexicon { } *_customLexicon;
}

- (id)initWithStaticLexicon:(struct _LXLexicon { } *)a0 customLexicon:(struct _LXLexicon { } *)a1;
- (id)process:(id)a0 options:(id)a1;

@end
