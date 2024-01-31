@class NSDictionary, DMFDevice;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey;
@property (readonly, nonatomic) DMFDevice *device;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithValuesByPropertyKey:(id)a0 errorsByPropertyKey:(id)a1;
- (id)valueForPropertyKey:(id)a0 error:(id *)a1;

@end
