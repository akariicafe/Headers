@class NSMutableArray;

@interface NLTokenIDBasedLanguageModelState : NLLanguageModelState {
    NSMutableArray *_contextTokenIDArray;
}

- (void).cxx_destruct;
- (void)addContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetContext;
- (id)conditionalProbabilityForToken:(id)a0;
- (unsigned int *)contextTokenIDs;
- (void)addContextTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1;
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)conditionalProbabilityForTokenID:(unsigned int)a0;
- (unsigned long long)contextLength;
- (id)contextTokenIDArrayForContext:(id)a0;
- (void)enumeratePredictions:(unsigned long long)a0 maximumTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2 contextTokenIDArray:(id)a3;

@end
