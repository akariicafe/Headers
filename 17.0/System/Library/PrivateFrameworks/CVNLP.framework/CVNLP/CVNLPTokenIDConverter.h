@interface CVNLPTokenIDConverter : NSObject {
    struct unique_ptr<cvnlp::AbstractVocabulary, std::default_delete<cvnlp::AbstractVocabulary>> { struct __compressed_pair<cvnlp::AbstractVocabulary *, std::default_delete<cvnlp::AbstractVocabulary>> { struct AbstractVocabulary *__value_; } __ptr_; } _vocabTokenizer;
}

@property (readonly) unsigned int bosTokenID;
@property (readonly) unsigned int eosTokenID;
@property (readonly) unsigned int unkTokenID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateTokenIDsForText:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithResource:(id)a0 andTokenType:(int)a1;

@end
