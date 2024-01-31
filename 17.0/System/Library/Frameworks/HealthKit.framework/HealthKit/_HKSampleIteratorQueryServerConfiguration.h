@class HKSampleIteratorQueryCursor;

@interface _HKSampleIteratorQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
