@interface ConversationKit.AudioVisualizationLayer : CALayer {
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ scaleBuffer;
    void /* unknown type, empty encoding */ rings;
    void /* unknown type, empty encoding */ color;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (void)dealloc;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)initWithCoder:(id)a0;

@end
