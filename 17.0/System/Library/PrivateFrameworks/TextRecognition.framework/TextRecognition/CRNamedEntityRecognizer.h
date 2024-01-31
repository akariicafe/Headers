@class NLTokenizer, NLTagger, NLGazetteer;

@interface CRNamedEntityRecognizer : NSObject {
    NLGazetteer *_nameGazetteer;
    NLGazetteer *_lastNameGazetteer;
    NLTagger *_tagger;
    NLTokenizer *_tokenizer;
}

+ (id)_NLLanguageFromLocale:(id)a0;

- (void).cxx_destruct;
- (id)_tokenizeString:(id)a0;
- (id)_nameCandidateTokensFromString:(id)a0;
- (id)_labelForString:(id)a0 useLastNameGazetteer:(BOOL)a1;
- (id)initWithNameGazetteerURL:(id)a0 lastNameGazetteerURL:(id)a1;
- (double)personNameScoreForStringWithGazetteers:(id)a0 locale:(id)a1 useLastNameGazetteer:(BOOL)a2;
- (double)personNameScoreForStringWithTagger:(id)a0 locale:(id)a1;

@end
