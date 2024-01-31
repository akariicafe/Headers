@class NSString;

@interface GCGenericDeviceDataInputElementValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly) long long scaleType;

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
