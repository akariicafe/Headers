@class CALayer, CAShapeLayer;

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain, nonatomic) CALayer *autoShadowBackgroundLayer;
@property (retain, nonatomic) CAShapeLayer *autoShadowOuterLayer;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)setup;

@end
