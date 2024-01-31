@interface LNDailyRoutineRelevantContext : LNRelevantContext

@property (readonly, nonatomic) long long situation;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;
- (id)analyticsDescription;
- (id)asCondition;

@end
