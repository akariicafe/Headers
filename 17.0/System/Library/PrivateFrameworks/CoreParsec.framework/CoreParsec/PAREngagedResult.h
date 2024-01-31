@class NSString, NSData, NSDate;

@interface PAREngagedResult : NSObject <NSSecureCoding, SFEngagedResult>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) int type;
@property (copy, nonatomic) NSData *encodedNormalizedTopic;
@property (copy, nonatomic) NSDate *engagementTime;
@property (nonatomic) double score;
@property (nonatomic) double freshnessScore;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
