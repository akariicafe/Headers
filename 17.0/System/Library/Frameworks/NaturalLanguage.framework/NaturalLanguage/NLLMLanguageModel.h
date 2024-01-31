@class NLLMTokenIDConverter;

@interface NLLMLanguageModel : NLLanguageModel {
    NLLMTokenIDConverter *_tokenIDConverter;
}

- (void).cxx_destruct;
- (BOOL)generatesPredictions;
- (id)sessionWithOptions:(id)a0;
- (id)tokenIDConverter;

@end
