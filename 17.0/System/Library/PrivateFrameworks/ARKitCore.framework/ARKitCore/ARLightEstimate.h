@class NSData;

@interface ARLightEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) double ambientIntensity;
@property (readonly, nonatomic) double ambientColorTemperature;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAmbientIntensity:(double)a0 temperature:(double)a1;

@end
