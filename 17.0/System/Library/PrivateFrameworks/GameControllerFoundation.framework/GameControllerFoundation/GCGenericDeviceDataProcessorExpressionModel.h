@interface GCGenericDeviceDataProcessorExpressionModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;
- (id /* block */)buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end
