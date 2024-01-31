@class TSUColor, KNMotionBackgroundStyle;

@interface KNMotionBackground : NSObject

@property (readonly, nonatomic) KNMotionBackgroundStyle *style;
@property (readonly, nonatomic) TSUColor *referenceColor;

+ (id)serialQueue;
+ (struct CGColorSpace { } *)colorSpace;

- (void)reset;
- (id)initWithStyle:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)blendingFactoryForTargetMotionBackground:(id)a0;
- (BOOL)canBlendWithMotionBackground:(id)a0;
- (id)fillWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)newPosterFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })p_adjustedPosterFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)p_newPosterFrameWithWidth:(double)a0 height:(double)a1;
- (void)updateWithStyle:(id)a0;

@end
