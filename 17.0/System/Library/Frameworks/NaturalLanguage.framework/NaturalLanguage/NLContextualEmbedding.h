@class NLTagger, NSString, NSArray, NSDictionary;

@interface NLContextualEmbedding : NSObject {
    NSString *_modelIdentifier;
    NSDictionary *_catalogEntry;
    NLTagger *_tagger;
    void *_embedding;
}

@property (readonly, copy) NSString *modelIdentifier;
@property (readonly, copy) NSArray *languages;
@property (readonly, copy) NSArray *scripts;
@property (readonly) unsigned long long revision;
@property (readonly) unsigned long long dimension;
@property (readonly) unsigned long long maximumSequenceLength;
@property (readonly) BOOL hasAvailableAssets;

+ (id)contextualEmbeddingForLanguage:(id)a0;
+ (id)contextualEmbeddingsWithValues:(id)a0;
+ (id)contextualEmbeddingCatalog;
+ (id)contextualEmbeddingForScript:(id)a0;
+ (id)contextualEmbeddingWithIdentifier:(id)a0;
+ (id)contextualEmbeddingWithLanguage:(id)a0;
+ (id)contextualEmbeddingWithModelIdentifier:(id)a0;
+ (id)contextualEmbeddingWithScript:(id)a0;
+ (id)contextualEmbeddingsForValues:(id)a0;

- (BOOL)load;
- (void)unload;
- (void)dealloc;
- (id)bundlePath;
- (id)vectorsForTokenizedSentences:(id)a0 untokenizedSentences:(id)a1 maxTokens:(unsigned long long)a2;
- (id)identifier;
- (id)bundleName;
- (id)description;
- (void).cxx_destruct;
- (BOOL)loadWithError:(id *)a0;
- (id)_tokenRangesForString:(id)a0 language:(id)a1;
- (BOOL)assetsAvailable;
- (id)_concatenatedEmbeddingDataForInputEmbeddingData:(id)a0 tokenizedSentences:(id)a1 batchComponentsCountArray:(id)a2 batchComponentRangesArray:(id)a3 maxTokens:(unsigned long long)a4;
- (id)_paddedEmbeddingDataForInputEmbeddingData:(id)a0 tokenizedSentences:(id)a1 batchComponentsCountArray:(id)a2 batchComponentRangesArray:(id)a3 maxTokens:(unsigned long long)a4;
- (id)_taggerForString:(id)a0 language:(id)a1;
- (id)_tokensForString:(id)a0 tokenRanges:(id)a1;
- (id)assetLocale;
- (id)assetLocaleIdentifier;
- (id)embeddingResultForString:(id)a0 language:(id)a1 error:(id *)a2;
- (id)initWithModelIdentifier:(id)a0;
- (BOOL)loadWithOptions:(id)a0 error:(id *)a1;
- (void)requestAssetsWithCompletionHandler:(id /* block */)a0;
- (void)requestEmbeddingAssetsWithCompletionHandler:(id /* block */)a0;
- (void)requestEmbeddingResultForString:(id)a0 language:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)sentenceVectorDimension;
- (id)subRangesWithinToken:(id)a0 componentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2;
- (id)tokenDictionariesForString:(id)a0 tokens:(id)a1 tokenRanges:(id)a2 componentRanges:(id)a3 componentsCount:(unsigned long long)a4;
- (unsigned long long)tokenVectorDimension;

@end
