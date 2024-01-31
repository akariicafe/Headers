@class NSDictionary;

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *collectionIntervals;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
