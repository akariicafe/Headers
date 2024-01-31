@class PXFeedbackStore;

@interface PXFeedbackCollector : NSObject

@property (readonly, nonatomic) PXFeedbackStore *feedbackStore;

- (id)init;
- (void).cxx_destruct;
- (id)_appVersion;
- (id)_uniqueSystemIdentifier;
- (void)addFeedbackEntry:(id)a0;
- (id)addFeedbackFromDictionary:(id)a0;
- (id)feedbackEntryFromDictionary:(id)a0;
- (void)removeFeedbackEntry:(id)a0;

@end
