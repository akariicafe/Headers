@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *publisherTagID;
@property (retain, nonatomic) NSString *topicTagID;
@property (readonly, nonatomic) NSArray *features;

- (id)init;
- (id)initWithPublisherTagID:(id)a0 topicTagID:(id)a1;
- (void).cxx_destruct;
- (id)initWithPersonalizationIdentifier:(id)a0;

@end
