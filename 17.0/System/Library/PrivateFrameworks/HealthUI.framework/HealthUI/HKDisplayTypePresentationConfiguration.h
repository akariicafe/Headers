@interface HKDisplayTypePresentationConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long currentValue;
@property (readonly, nonatomic) long long secondaryValue;
@property (readonly, nonatomic) long long detailChart;
@property (readonly, nonatomic) BOOL singleDailyValue;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurrentValue:(long long)a0 secondaryValue:(long long)a1 detailChart:(long long)a2 singleDailyValue:(BOOL)a3;

@end
