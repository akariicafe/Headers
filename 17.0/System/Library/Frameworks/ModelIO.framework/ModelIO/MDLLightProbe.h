@class NSData, MDLTexture, NSMutableData;
@protocol MDLTransformComponent;

@interface MDLLightProbe : MDLLight {
    NSMutableData *_sphericalHarmonicsCoefficients;
    id<MDLTransformComponent> _transform;
}

@property (readonly, retain, nonatomic) MDLTexture *reflectiveTexture;
@property (readonly, retain, nonatomic) MDLTexture *irradianceTexture;
@property (readonly, nonatomic) unsigned long long sphericalHarmonicsLevel;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

+ (void /* unknown type, empty encoding */)calculateIrradianceGradientUsingSamples:(void *)a0 ofSize:(unsigned long long)a1 fromSH:(id)a2 withLevel:(unsigned long long)a3;
+ (id)lightProbeWithTextureSize:(long long)a0 forLocation:(id)a1 lightsToConsider:(id)a2 objectsToConsider:(id)a3 reflectiveCubemap:(id)a4 irradianceCubemap:(id)a5;
+ (struct CGColor { } *)sampleSHAt:(SEL)a0 usingCoefficients:(id)a1 withLevel:(unsigned long long)a2;

- (void)setTransform:(id)a0;
- (id)transform;
- (void).cxx_destruct;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)a0;
- (id)initWithReflectiveTexture:(id)a0 irradianceTexture:(id)a1;
- (void)setSphericalHarmonicsCoefficients:(id)a0;

@end
