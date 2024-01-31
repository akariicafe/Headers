@class BiasEstimatorOutputs, BiasEstimatorFeatures;

@interface UWBSignalFeatures : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BiasEstimatorFeatures *inputFeatures;
@property (copy, nonatomic) BiasEstimatorOutputs *outputs;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUWBSignalFeatures:(id)a0;
- (id)orderedBiasEstimatorFeatutes;

@end
