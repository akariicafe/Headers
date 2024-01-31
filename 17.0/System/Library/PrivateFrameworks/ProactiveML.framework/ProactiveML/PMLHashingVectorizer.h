@class NSString, NSLocale;
@protocol PMLWordPieceVocabProtocol;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol> {
    int _buckets;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterNGramRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _tokenNGramRange;
    BOOL _shouldNormalizeTokens;
    BOOL _shouldNormalizeCharacters;
    NSLocale *_localeForNonwordTokens;
    BOOL _tokenizeNewlines;
    unsigned long long _idVectorLength;
    unsigned long long _extraIdOptions;
    unsigned long long _vectorizerStrategy;
    long long _vectorNormalization;
    long long _paddingId;
    long long _endId;
    long long _startId;
    id<PMLWordPieceVocabProtocol> _vocab;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBucketSize:(int)a0 andNgrams:(int)a1;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6;
+ (id)withBucketSize:(int)a0 andCharNgramOrder:(int)a1;
+ (id)withBucketSize:(int)a0 andNgramOrder:(int)a1;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6 idVectorLength:(unsigned long long)a7 extraIdOptions:(unsigned long long)a8 vectorizerStrategy:(unsigned long long)a9 vectorNormalization:(long long)a10;
+ (id)withBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6 idVectorLength:(unsigned long long)a7 extraIdOptions:(unsigned long long)a8 vectorizerStrategy:(unsigned long long)a9 vectorNormalization:(long long)a10 vocab:(id)a11;
+ (id)withBucketSize:(int)a0 ngrams:(int)a1 localeForNonwordTokens:(id)a2 tokenizeNewlines:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)transformBatch:(id)a0;
- (id)initWithBucketSize:(int)a0 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldNormalizeTokens:(BOOL)a3 shouldNormalizeCharacters:(BOOL)a4 localeForNonwordTokens:(id)a5 tokenizeNewlines:(BOOL)a6 idVectorLength:(unsigned long long)a7 extraIdOptions:(unsigned long long)a8 vectorizerStrategy:(unsigned long long)a9 vectorNormalization:(long long)a10 vocab:(id)a11;
- (id)initWithBucketSize:(int)a0 ngrams:(int)a1 localeForNonwordTokens:(id)a2 tokenizeNewlines:(BOOL)a3;
- (BOOL)isEqualToHashingVectorizer:(id)a0;
- (void)setVectorizerNormalization:(long long)a0;
- (id)transformBagOfIds:(id)a0 shouldDecrement:(BOOL)a1;
- (id)transformSequentialNGrams:(id)a0;
- (id)transformWithFrequency:(id)a0 shouldDecrement:(BOOL)a1;
- (id)transformWithWordPiece:(id)a0;

@end
