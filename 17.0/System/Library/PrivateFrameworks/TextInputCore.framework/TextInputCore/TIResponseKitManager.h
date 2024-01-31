@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_conversationTurns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)rewriteMoneyAttributes:(id)a0;
+ (id)sharedTIResponseKitManager;

- (id)init;
- (void).cxx_destruct;
- (void)addNewConversationTurnToHistory:(id)a0;
- (id)cannedResponsesForString:(id)a0 withLanguageID:(id)a1 withClientID:(id)a2 withRecipientID:(id)a3 withAdditionalPredictions:(id)a4 desiredCandidateCount:(unsigned long long)a5 shouldDisableAutoCaps:(BOOL)a6 isBlacklisted:(BOOL)a7;
- (void)generateResponseKitSuggestionsForString:(id)a0 withLanguage:(id)a1 withClientID:(id)a2 withRecipientID:(id)a3 withAdditionalPredictions:(id)a4 desiredCandidateCount:(unsigned long long)a5 shouldDisableAutoCaps:(BOOL)a6 stringIsBlacklisted:(BOOL)a7 async:(BOOL)a8 completionHandler:(id /* block */)a9;
- (id)indexesOfDuplicatesInCandidates:(id)a0;
- (void)persistResponseKitDynamicDataToDisk;
- (void)registerResponseKitResponse:(id)a0 forMessage:(id)a1 withLanguage:(id)a2 withClientID:(id)a3 withSenderID:(id)a4 withRecipientID:(id)a5 withTimestamp:(id)a6 shouldUpdateConversationHistory:(BOOL)a7;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (id)responseKitResponseCandidatesForString:(id)a0 withLanguageID:(id)a1 withClientID:(id)a2 withRecipientID:(id)a3 shouldDisableAutoCaps:(BOOL)a4;
- (void)updateResponseKitConversationHistoryWithMessage:(id)a0 withSenderID:(id)a1 withTimestamp:(id)a2;

@end
