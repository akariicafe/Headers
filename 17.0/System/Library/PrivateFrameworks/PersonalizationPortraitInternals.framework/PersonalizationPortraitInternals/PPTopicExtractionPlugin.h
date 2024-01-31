@class PPTopicDissector;

@interface PPTopicExtractionPlugin : NSObject {
    PPTopicDissector *_dissector;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_topicContainersForText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 groupId:(id)a3 documentId:(id)a4 contactHandles:(id)a5 weight:(double)a6 isOutgoing:(BOOL)a7;
- (id)extractionsFromText:(id)a0 bundleId:(id)a1;
- (id)initWithTopicDissector:(id)a0;

@end
