@class NSArray, RKResponseCollection, RKRankLearner, NSObject;
@protocol OS_dispatch_queue;

@interface RKMessageResponseManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain) RKResponseCollection *collection;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain) RKRankLearner *rankLearner;

+ (id)sharedManager;
+ (id)_chronologicalConversationHistory:(id)a0;
+ (BOOL)_isMirroredResponseValidForResponse:(id)a0;
+ (id)_mostRecentTextFromChronologicalConversationHistory:(id)a0;
+ (BOOL)_needsMirroredAnalysisForMessage:(id)a0 forChronologicalConversationHistory:(id)a1;
+ (BOOL)_responseLooksLikeIncomingCheckInResponse:(id)a0;
+ (BOOL)_responseLooksLikeOutgoingCheckInResponse:(id)a0;
+ (BOOL)_responseTypeIsSunsetted:(id)a0;

- (id)dispatchQueue;
- (id)init;
- (void).cxx_destruct;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forContext:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)flushDynamicData;
- (void)registerResponse:(id)a0 forMessage:(id)a1 metadata:(id)a2 withLanguage:(id)a3;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forContext:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4;
- (id)initWithDynamicDataURL:(id)a0;
- (void)registerResponse:(id)a0 forMessage:(id)a1 forContext:(id)a2 withLanguage:(id)a3;
- (void)resetRegisteredResponses;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4;
- (id)categoryForMessage:(id)a0 langID:(id)a1;
- (id)categoryForMessageWithoutQueue:(id)a0 langID:(id)a1;
- (id)getRankLearner;
- (id)initWithAssetPlistURL:(id)a0;
- (id)initWithDynamicDataURL:(id)a0 displayStringsProvider:(id)a1;
- (id)initWithDynamicDataURL:(id)a0 withBundleURL:(id)a1;
- (BOOL)isQuestion:(id)a0 withLanguage:(id)a1;
- (void)prunePersonalizedUserDatabase:(id)a0;
- (void)registerResponse:(id)a0 forMessage:(id)a1 forContext:(id)a2 withEffectiveDate:(id)a3 withLanguage:(id)a4;
- (id)responseWithAttributesMatchingProactiveGrammarForMessage:(id)a0 languageID:(id)a1 kbdInputModes:(id)a2;
- (void)responseWithAttributesMatchingProactiveGrammarForMessage:(id)a0 languageID:(id)a1 kbdInputModes:(id)a2 completionBlock:(id /* block */)a3;
- (id)responseWithAttributesMatchingProactiveGrammarForMessageImp:(id)a0 languageID:(id *)a1 kbdInputModes:(id)a2;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 inputModes:(id)a4 options:(unsigned long long)a5;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 recipientID:(id)a2 forConversationHistory:(id)a3 withLanguage:(id)a4 options:(unsigned long long)a5;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 recipientID:(id)a2 forConversationHistory:(id)a3 withLanguage:(id)a4 options:(unsigned long long)a5 completionBlock:(id /* block */)a6;
- (id)responsesForMessageImp:(id)a0 maximumResponses:(unsigned long long)a1 forRecipientID:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 withLanguage:(id)a5 options:(unsigned long long)a6;
- (id)responsesForMessageWithLanguageDetection:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 withLanguage:(id *)a4 options:(unsigned long long)a5;
- (void)responsesForMessageWithLanguageDetection:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 withLanguage:(id *)a4 options:(unsigned long long)a5 completionBlock:(id /* block */)a6;
- (id)responsesForMessageWithLanguageDetectionImp:(id)a0 maximumResponses:(unsigned long long)a1 forRecipientID:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 withLanguage:(id *)a5 inputModes:(id)a6 options:(unsigned long long)a7;
- (BOOL)usePersonalizedRanking;

@end
