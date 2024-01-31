@interface CDMFoundation.CDMCcqrAerCbROverridesProxy : SiriNLUOverrideProxy {
    void /* unknown type, empty encoding */ defaultTemplatePattern;
    void /* unknown type, empty encoding */ templatePattern;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureGroupExpression;
}

- (void).cxx_destruct;
- (BOOL)addWithCollection:(id)a0;
- (BOOL)clean;
- (id)getRewriteHypothesisWithOverrideUtterance:(id)a0;
- (id)initWithUseTrie:(BOOL)a0 useMemory:(BOOL)a1;
- (id)initWithUseTrie:(BOOL)a0 useMemory:(BOOL)a1 templatePattern:(id)a2;
- (id)matchWithInputs:(id)a0;

@end
