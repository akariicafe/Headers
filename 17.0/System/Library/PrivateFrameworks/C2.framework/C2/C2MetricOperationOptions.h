@class NSString, C2MetricOperationGroupOptions;

@interface C2MetricOperationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) C2MetricOperationGroupOptions *operationGroup;
@property (copy, nonatomic) NSString *operationId;
@property (copy, nonatomic) NSString *operationType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
