@class PKDynamicLayerCrossDissolveConfiguration, PKDynamicLayerEmitterConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL parallaxEnabled;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *backgroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *neutralEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *foregroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *staticOverlayEmitter;
@property (retain, nonatomic) PKDynamicLayerTransactionEffectConfiguration *transactionEffect;
@property (retain, nonatomic) PKDynamicLayerCrossDissolveConfiguration *crossDissolve;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
