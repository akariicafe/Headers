@class NSArray, NSString, CALayer;
@protocol CALayerDelegate;

@interface TSDRenderable : NSObject <TSDContentsScaleProviding>

@property (readonly, nonatomic) CALayer *layer;
@property (copy, nonatomic) NSArray *subrenderables;
@property (readonly, nonatomic) TSDRenderable *presentationRenderable;
@property (weak, nonatomic) id<CALayerDelegate> delegate;
@property (retain, nonatomic) id contents;
@property (readonly) CALayer *superlayer;
@property (copy, nonatomic) NSArray *sublayers;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (retain, nonatomic) CALayer *mask;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } affineTransform;
@property (nonatomic) double contentsScale;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned int edgeAntialiasingMask;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct CGColor { } *borderColor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentsRect;
@property (nonatomic) BOOL allowsGroupOpacity;
@property (nonatomic) BOOL masksToBounds;
@property (copy, nonatomic) NSString *magnificationFilter;
@property (nonatomic) double zPosition;
@property (copy, nonatomic) NSString *contentsGravity;
@property (nonatomic) struct CGColor { } *shadowColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGPath { } *shadowPath;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) double rasterizationScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredFrameSize;
@property (readonly, nonatomic) BOOL tsd_tilingSafeHasContents;

+ (id)renderable;
+ (id)renderableFromLayer:(id)a0;
+ (id)renderablesFromLayers:(id)a0;

- (void)setNeedsDisplay;
- (unsigned long long)hash;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toLayer:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)animationForKey:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromLayer:(id)a1;
- (void)removeAnimationForKey:(id)a0;
- (void)addSubrenderable:(id)a0;
- (id)initWithCALayer:(id)a0;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)setMaskRenderable:(id)a0;

@end
