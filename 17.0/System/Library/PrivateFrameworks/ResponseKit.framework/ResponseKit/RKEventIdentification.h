@class NSArray;

@interface RKEventIdentification : NSObject {
    float *_probabilities;
}

@property (readonly, nonatomic) NSArray *tokenSequences;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateClassifiedTokens:(id /* block */)a0;
- (void)enumerateTopKClassificationsForEachString:(unsigned long long)a0 block:(id /* block */)a1;
- (void)getTopKClassifications:(unsigned long long)a0 block:(id /* block */)a1;
- (id)initWithOwnedTokenSequences:(id)a0 probabilities:(float *)a1;
- (struct { unsigned long long x0; float x1; })topClassification;

@end
