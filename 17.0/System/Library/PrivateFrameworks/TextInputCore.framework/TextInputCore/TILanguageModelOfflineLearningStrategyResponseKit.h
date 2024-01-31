@class NSString, NSMutableDictionary, NSURL, TILanguageModelOfflineLearningTask, RKMessageResponseManager;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy> {
    NSMutableDictionary *_recipientModels;
    NSURL *_directory;
    RKMessageResponseManager *_trainer;
}

@property (readonly) TILanguageModelOfflineLearningTask *learningTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)filterMessages:(id)a0;
- (void)didFinishLearning;
- (id)initWithClientIdentifier:(id)a0 andDirectory:(id)a1;
- (BOOL)learnMessages:(id)a0 withRecipientRecords:(id)a1;
- (id)messagesClusteredByRecipient:(id)a0;

@end
