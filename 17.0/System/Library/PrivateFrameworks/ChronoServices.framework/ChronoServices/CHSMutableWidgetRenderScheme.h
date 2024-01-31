@interface CHSMutableWidgetRenderScheme : CHSWidgetRenderScheme

@property (nonatomic) unsigned long long renderingMode;
@property (nonatomic) unsigned long long backgroundViewPolicy;

- (void)setRenderingMode:(unsigned long long)a0;
- (void)setOpaque:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackgroundViewPolicy:(unsigned long long)a0;
- (void)setRenderingModes:(unsigned long long)a0;

@end
