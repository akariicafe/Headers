@class NSArray;

@interface CVNLPDecodingLexicons : CVNLPInformationStream {
    NSArray *_sortedLexicons;
}

@property (readonly, nonatomic) void /* function */ *inputNormalizationFunction;

- (unsigned long long)count;
- (void).cxx_destruct;
- (void)enumerateLexiconsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithLexicons:(id)a0;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1 lowerBoundLogProbability:(id)a2;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1 lowerBoundLogProbability:(id)a2 inputNormalizationFunction:(void /* function */ *)a3;
- (id)lexiconsForPriority:(unsigned long long)a0;
- (id)packagedLexiconCursorsUsingTextDecodingContext:(id)a0;
- (id)packagedLexiconRootCursors;

@end
