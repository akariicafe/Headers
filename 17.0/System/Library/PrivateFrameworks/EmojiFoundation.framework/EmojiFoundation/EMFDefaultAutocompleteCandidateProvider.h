@class NSArray;

@interface EMFDefaultAutocompleteCandidateProvider : NSObject <EMFAutocompleteCandidateProvider>

@property (readonly, nonatomic) NSArray *tokens;

+ (id)providerFromInvertedIndex:(id)a0;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (void)enumerateCandidatesMatchingPrefix:(id)a0 withEnumerationType:(long long)a1 maxCandidates:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)firstCandidateMatchingPrefix:(id)a0;
- (id)firstMatchForPrefix:(id)a0;
- (BOOL)isValidToken:(id)a0;
- (id)matchesForPrefix:(id)a0 usingAlgorithm:(unsigned long long)a1;

@end
