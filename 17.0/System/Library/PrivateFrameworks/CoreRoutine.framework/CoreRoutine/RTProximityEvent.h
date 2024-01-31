@class NSUUID, NSArray, NSDate;

@interface RTProximityEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *eventID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double socialScore;
@property (readonly, copy, nonatomic) NSArray *combinedFrequencyScores;
@property (readonly, copy, nonatomic) NSArray *combinedRecencyScores;
@property (readonly, copy, nonatomic) NSArray *combinedSignificanceScores;
@property (readonly, nonatomic) long long relationship;

+ (id)convertContactFrequencyToString:(long long)a0;
+ (id)convertContactRecencyToString:(long long)a0;
+ (id)convertContactSignificanceToString:(long long)a0;
+ (id)convertPersonRelationshipToString:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventID:(id)a0 startDate:(id)a1 endDate:(id)a2 relationship:(long long)a3 socialScore:(double)a4 combinedFrequencyScores:(id)a5 combinedRecencyScores:(id)a6 combinedSignificanceScores:(id)a7;

@end
