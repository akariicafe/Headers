@class NSString, NSArray, NSData;

@interface NLContextualEmbeddingResult : NSObject {
    NSString *_string;
    NSArray *_tokenDictionaries;
    NSData *_data;
    NSString *_language;
    unsigned long long _tokenVectorDimension;
}

@property (readonly, copy) NSString *string;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long sequenceLength;

- (void).cxx_destruct;
- (id)tokenVectorData;
- (id)_tokenVectorAtIndex:(unsigned long long)a0;
- (void)enumerateTokenVectorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithString:(id)a0 tokenDictionaries:(id)a1 data:(id)a2 language:(id)a3 tokenVectorDimension:(unsigned long long)a4;
- (id)sentenceVector;
- (id)sentenceVectorData;
- (id)tokenVectorAtIndex:(unsigned long long)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
