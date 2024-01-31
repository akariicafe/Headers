@class NSString, NSArray, NSDate;

@interface ATXUsageInsightsPhubbingEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *relationshipType;
@property (readonly, copy, nonatomic) NSDate *startTime;
@property (readonly, copy, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSArray *appSessions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRelationshipType:(id)a0 startTime:(id)a1 endTime:(id)a2 duration:(double)a3 appSessions:(id)a4;

@end
