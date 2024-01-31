@interface TSDMutableContactShadow : TSDContactShadow <TSDMutableShadow>

@property (nonatomic) double height;
@property (nonatomic) double perspective;

- (void)setOpacity:(double)a0;
- (void)setOffset:(double)a0;
- (void)setRadius:(double)a0;
- (void)setHeight:(double)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAngle:(double)a0;
- (void)setPerspective:(double)a0;

@end
