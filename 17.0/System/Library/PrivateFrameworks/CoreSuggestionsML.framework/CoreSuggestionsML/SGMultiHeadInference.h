@class SGMultiHeadEspressoModel, SGQuickResponsesTransformerInstance, NSMutableDictionary, SGQuickResponsesConfig;

@interface SGMultiHeadInference : NSObject {
    SGQuickResponsesConfig *_config;
    SGMultiHeadEspressoModel *_model;
    SGQuickResponsesTransformerInstance *_transformer;
    NSMutableDictionary *_headDimensionality;
}

+ (id)predictForMessage:(id)a0 conversationTurns:(id)a1 localeIdentifier:(id)a2 plistPath:(id)a3 espressoBinPath:(id)a4 vocabPath:(id)a5 heads:(id)a6;
+ (id)quickResponsesForMessage:(id)a0 conversationTurns:(id)a1 maxResponses:(unsigned long long)a2 localeIdentifier:(id)a3 plistPath:(id)a4 espressoModelPath:(id)a5 vocabPath:(id)a6;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 inputName:(id)a1 plistPath:(id)a2 espressoBinPath:(id)a3 vocabPath:(id)a4;
- (id)_getMergedPromptForMessage:(id)a0 conversationTurns:(id)a1;
- (id)initWithLanguage:(id)a0 inputName:(id)a1 plistPath:(id)a2 espressoModelPath:(id)a3 vocabPath:(id)a4;
- (id)predictForMessage:(id)a0 conversationTurns:(id)a1 language:(id)a2 heads:(id)a3;
- (id)predictForMessage:(id)a0 heads:(id)a1;
- (id)predictForVector:(id)a0 heads:(id)a1;
- (id)quickResponsesForMessage:(id)a0 conversationTurns:(id)a1 maxResponses:(unsigned long long)a2 language:(id)a3;

@end
