@interface HKMHValenceSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long countPleasant;
@property (nonatomic) long long countNeutral;
@property (nonatomic) long long countUnpleasant;
@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) long long totalCount;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addValence:(long long)a0;
- (id)initWithCountPleasant:(long long)a0 countNeutral:(long long)a1 countUnpleasant:(long long)a2 dayIndexRange:(struct { long long x0; long long x1; })a3;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0;

@end
