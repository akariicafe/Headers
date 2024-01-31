@class NSString, ESAtomRanged;

@interface ESEditScriptRanged : ESEditScript {
    long long _options;
    ESAtomRanged *_currentScriptAtom;
}

@property (readonly, weak, nonatomic) NSString *stringA;
@property (readonly, weak, nonatomic) NSString *stringB;

+ (id)editScriptForSmallestSingleEditFromString:(id)a0 toString:(id)a1;
+ (id)editScriptFromString:(id)a0 toString:(id)a1;
+ (id)editScriptFromString:(id)a0 toString:(id)a1 chunkSize:(long long)a2 orderAtomsAscending:(BOOL)a3 operationPrecedence:(long long)a4 options:(long long)a5;
+ (id)editScriptForSmallestSingleEditFromString:(id)a0 toString:(id)a1 chunkSize:(long long)a2;

- (void).cxx_destruct;
- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (id)applyToString:(id)a0;
- (void)computeSmallestSingleEdit;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)a0 dataClass:(Class)a1 chunkSize:(long long)a2 stringA:(id)a3 stringB:(id)a4 orderAtomsAscending:(BOOL)a5 options:(long long)a6;
- (void)initializeCurrentScriptAtom;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)a0 andReverseIndexOfLastDifference:(long long *)a1 shouldShortenFirstDifference:(BOOL)a2;

@end
