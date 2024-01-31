@interface _CDRateAndTotalLimiter : _CDRateLimiter

@property long long currentTotal;
@property (readonly) long long totalCount;

- (id)initWithCount:(long long)a0 perPeriod:(double)a1;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1 totalCountLimit:(long long)a2;
- (BOOL)credit;
- (id)description;
- (BOOL)debited;

@end
