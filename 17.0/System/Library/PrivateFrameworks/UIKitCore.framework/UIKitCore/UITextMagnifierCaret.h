@interface UITextMagnifierCaret : UITextMagnifier {
    double _yOffset;
}

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)sharedCaretMagnifier;
+ (Class)renderClass;
+ (id)activeCaretMagnifier;

- (void)remove;
- (BOOL)isHorizontal;
- (void)zoomUpAnimation;
- (struct CGPoint { double x0; double x1; })animationPoint;
- (void)beginMagnifyingTarget:(id)a0 text:(id)a1 magnificationPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (id)initWithFrame;
- (double)offsetFromMagnificationPoint;
- (void)setAnimationPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)terminalPointPlacedCarefully;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;

@end
