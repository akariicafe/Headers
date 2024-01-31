@class NSCalendar;

@interface HKMHDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (nonatomic) BOOL ascending;
@property (nonatomic) long long limit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
