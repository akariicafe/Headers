@interface ATXInfoTimelineEntryRelevance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double duration;

+ (id)relevanceWithScore:(double)a0 duration:(double)a1;

- (id)init;
- (id)initWithScore:(double)a0 duration:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
