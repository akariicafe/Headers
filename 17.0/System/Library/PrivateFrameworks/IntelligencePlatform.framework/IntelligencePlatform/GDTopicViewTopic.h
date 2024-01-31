@class NSString;

@interface GDTopicViewTopic : NSObject

@property (readonly, nonatomic) NSString *topicIdentifier;
@property (readonly, nonatomic) double topicScore;
@property (readonly, nonatomic) NSString *mostRecentDocumentId;

- (void).cxx_destruct;
- (id)initWithTopicIdentifier:(id)a0 topicScore:(double)a1 mostRecentDocumentId:(id)a2;

@end
