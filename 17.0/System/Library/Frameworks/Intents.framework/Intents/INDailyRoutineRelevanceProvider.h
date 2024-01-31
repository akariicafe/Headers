@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

@property (readonly, nonatomic) long long situation;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;

@end
