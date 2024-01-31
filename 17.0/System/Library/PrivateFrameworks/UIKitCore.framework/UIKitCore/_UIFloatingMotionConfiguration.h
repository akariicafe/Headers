@interface _UIFloatingMotionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } rotation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;

+ (id)configurationWithLargeTranslationOnAxis:(unsigned long long)a0;
+ (id)configurationWithRotation:(struct CGPoint { double x0; double x1; })a0;
+ (id)configurationWithRotationOnAxis:(unsigned long long)a0;
+ (id)configurationWithTranslation:(struct CGPoint { double x0; double x1; })a0;
+ (id)configurationWithTranslationOnAxis:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTranslation:(struct CGPoint { double x0; double x1; })a0 rotation:(struct CGPoint { double x0; double x1; })a1;

@end
