@class _PASRng, SGQuickResponsesPersonalization, SGQuickResponsesModel, SGQuickResponsesRanking, SGQuickResponsesStore;

@interface SGQuickResponsesInference : NSObject {
    SGQuickResponsesStore *_store;
    SGQuickResponsesModel *_model;
    SGQuickResponsesRanking *_ranking;
    SGQuickResponsesPersonalization *_personalization;
    _PASRng *_rng;
}

+ (id)dynamicIndicesAndTopIsDynamic:(id)a0 config:(id)a1;
+ (id)dynamicLabelForScore:(id)a0 config:(id)a1;
+ (id)languageForLocale:(id)a0 withLanguageDetectionForMessage:(id)a1;
+ (id)normalizeLabelScores:(id)a0;
+ (id)normalizeStringForDeduping:(id)a0;
+ (id)proactiveTriggerForDynamicLabel:(id)a0 context:(id)a1 language:(id)a2;
+ (id)proactiveTriggerForDynamicLabel:(id)a0 context:(id)a1 language:(id)a2 useContactNames:(BOOL)a3;
+ (id)quickResponsesForMessage:(id)a0 context:(id)a1 time:(id)a2 maxResponses:(unsigned long long)a3 locale:(id)a4 recipientHandles:(id)a5 chunkPath:(id)a6 plistPath:(id)a7 espressoBinFilePath:(id)a8 vocabFilePath:(id)a9 includeCustomResponses:(BOOL)a10 includeResponsesToRobots:(BOOL)a11;
+ (id)quickResponsesForMessage:(id)a0 conversationTurns:(id)a1 maxResponses:(unsigned long long)a2 localeIdentifier:(id)a3 recipientHandles:(id)a4 chunkPath:(id)a5 plistPath:(id)a6 espressoBinFilePath:(id)a7 vocabFilePath:(id)a8 useContactNames:(BOOL)a9 includeCustomResponses:(BOOL)a10 includeResponsesToRobots:(BOOL)a11;
+ (void)registerDisplayedQuickResponses:(id)a0 plistPath:(id)a1 vocabPath:(id)a2;
+ (void)registerResponse:(id)a0 position:(id)a1 isCanned:(BOOL)a2 isUsingQuickResponses:(BOOL)a3 locale:(id)a4 plistPath:(id)a5 vocabPath:(id)a6;
+ (id)stringsForQuickResponses:(id)a0;

- (void).cxx_destruct;
- (id)_getMergedPromptForMessage:(id)a0 conversationTurns:(id)a1;
- (id)addCustomResponsesToCommonResponses:(id)a0 language:(id)a1 locale:(id)a2 recipient:(id)a3 modelScores:(id)a4 maxResponses:(unsigned long long)a5 customResponsesParams:(id)a6;
- (id)customResponsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 context:(id)a2 language:(id)a3 locale:(id)a4 recipients:(id)a5;
- (id)initWithLanguage:(id)a0 chunkPath:(id)a1 plistPath:(id)a2 espressoBinFilePath:(id)a3 vocabFilePath:(id)a4;
- (id)initWithLanguage:(id)a0 plistPath:(id)a1 espressoBinFilePath:(id)a2 vocabFilePath:(id)a3 storeDirectory:(id)a4;
- (id)initWithModel:(id)a0 ranking:(id)a1 personalization:(id)a2 rng:(id)a3 store:(id)a4;
- (id)quickResponsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 conversationHistory:(id)a2 context:(id)a3 time:(id)a4 language:(id)a5 locale:(id)a6 recipients:(id)a7 useContactNames:(BOOL)a8 includeCustomResponses:(BOOL)a9 includeResponsesToRobots:(BOOL)a10;
- (id)quickResponsesFromReplyPositions:(id)a0 isConfident:(BOOL)a1 config:(id)a2;
- (id)randomizedReplyPositionsForSemanticClass:(unsigned long long)a0 responseCount:(unsigned long long)a1 config:(id)a2;
- (id)replyPositionsForSemanticClass:(unsigned long long)a0 responseCount:(unsigned long long)a1 config:(id)a2;
- (id)replyPositionsFromSemanticClasses:(id)a0 config:(id)a1;
- (id)scoresAndIsConfidentForMessage:(id)a0 language:(id)a1 locale:(id)a2;
- (id)signpostedQuickResponsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 conversationHistory:(id)a2 context:(id)a3 time:(id)a4 language:(id)a5 locale:(id)a6 recipients:(id)a7 useContactNames:(BOOL)a8 includeCustomResponses:(BOOL)a9 includeResponsesToRobots:(BOOL)a10;

@end
