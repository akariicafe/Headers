@class NSString, NSDictionary;

@interface FCNewsTabiRecommendedIssuesInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendedIssuePublisherOutputName;
@property (retain, nonatomic) NSString *recommendedIssuePublisherScoreOutputName;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContextFeatureKey:(id)a0 recommendedIssuePublisherOutputName:(id)a1 recommendedIssuePublisherScoreOutputName:(id)a2;

@end
