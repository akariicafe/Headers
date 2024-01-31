@class NSString;

@interface GCGenericDeviceDataInputElementAttributeExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly, copy) NSString *attribute;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
