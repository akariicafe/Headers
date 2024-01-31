@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long style;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureTransactionEffectEmitterLayer:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)configureTransactionEffectEmitterLayer:(id)a0 withImage:(struct CGImage { } *)a1 andEmitterShapeData:(id)a2;

@end
