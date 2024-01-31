@class SFTopic, NSNumber, NSDate;

@interface SPRecentTopic : NSObject {
    SFTopic *_topic;
    NSNumber *_score;
    NSDate *_engagementDate;
}

@property (readonly, nonatomic) SFTopic *topic;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSDate *engagementDate;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 score:(id)a1 engagementDate:(id)a2;

@end
