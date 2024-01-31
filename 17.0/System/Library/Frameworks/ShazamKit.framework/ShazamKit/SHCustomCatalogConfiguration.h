@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (class, readonly, nonatomic) double maximumSearchableQuerySignatureDuration;
@property (class, readonly, nonatomic) double minimumQuerySignatureDurationForTracking;

@property (nonatomic) long long algorithm;
@property (nonatomic) long long density;
@property (nonatomic) BOOL supportsSignatureTracking;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
