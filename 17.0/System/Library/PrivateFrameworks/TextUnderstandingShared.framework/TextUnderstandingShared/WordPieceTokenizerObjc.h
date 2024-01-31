@class BurstTrieDictionary;

@interface WordPieceTokenizerObjc : NSObject {
    BurstTrieDictionary *_vocab;
    float _startId;
    float _endId;
    float _padId;
    float _unkId;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithVocab:(id)a0;
- (float)startId;
- (float)endId;
- (float)padId;
- (id)tokenize:(id)a0 withLength:(unsigned long long)a1;
- (int)toWordTokens:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 wordTokensUTF8:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 fromInput:(id)a2 withLength:(unsigned long long)a3;
- (int)tokenizeToIds:(float *)a0 ranges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 wordIndexes:(long long *)a2 fromString:(id)a3 wordTokens:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 wordTokensUTF8:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5 wordCount:(int)a6 length:(unsigned long long)a7;
- (float)unkId;

@end
