@class NSMutableDictionary;

@interface CVNLPCTCBeamState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePaths;

- (id)init;
- (id)paths;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addPath:(id)a0;
- (void)applyWordLanguageModelProbabilityToPaths;
- (void)enumeratePathsWithBlock:(id /* block */)a0;
- (void)kBest:(id *)a0 discarded:(id *)a1 k:(unsigned long long)a2 shouldUpdateLMState:(BOOL)a3;
- (void)mergePathsWithTrailingWhitespaces;
- (id)pathForString:(id)a0;
- (id)sortedKeys;

@end
