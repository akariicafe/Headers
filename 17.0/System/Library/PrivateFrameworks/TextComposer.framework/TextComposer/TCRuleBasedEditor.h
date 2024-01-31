@class AppleSpell;

@interface TCRuleBasedEditor : NSObject <TCPostEditing> {
    AppleSpell *_checker;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)addGrammarDetailsForSentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sentence:(id)a1 result:(id)a2 mutableDetails:(id)a3;
- (void)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (void)loadModelsInBackground:(BOOL)a0;
- (void)resetModels;

@end
