@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject {
    unsigned long long _feedbackCollectionType;
}

@property (readonly, nonatomic) PXFeedbackCollector *feedbackCollector;
@property (readonly, nonatomic) PXFeedbackSender *feedbackSender;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)provideUserFeedbackEntry:(id)a0;
- (id)provideUserFeedbackFromDictionary:(id)a0 forFeedbackType:(unsigned long long)a1;
- (void)removeFeedbackEntry:(id)a0;

@end
