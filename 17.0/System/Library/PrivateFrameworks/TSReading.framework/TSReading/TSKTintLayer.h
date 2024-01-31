@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer

@property (retain, nonatomic) CALayer *contentsLayer;
@property struct CGColor { } *tintColor;

- (void)setNeedsDisplay;
- (void)dealloc;
- (id)contents;
- (void)setContents:(id)a0;
- (void)layoutSublayers;

@end
