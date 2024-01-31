@class NSDictionary;

@interface CRKFetchDevicePropertiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByPropertyKey;
@property (copy, nonatomic) NSDictionary *errorsByPropertyKey;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)valueForPropertyKey:(id)a0 error:(id *)a1;

@end
