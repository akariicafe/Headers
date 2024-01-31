@class UIView;

@interface _UITextClippingDebugInfo : NSObject

@property (weak, nonatomic) UIView *clippingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (nonatomic) BOOL ignoresResult;
@property (nonatomic) unsigned long long edgesClipped;
@property (nonatomic) BOOL leftEdgeClipped;
@property (nonatomic) BOOL rightEdgeClipped;
@property (nonatomic) BOOL bottomEdgeClipped;
@property (nonatomic) BOOL topEdgeClipped;

- (void).cxx_destruct;
- (id)initWithClippingView:(id)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ignoresResult:(BOOL)a2 edgesClipped:(unsigned long long)a3;

@end
