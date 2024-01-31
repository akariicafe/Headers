@class NSAttributedString;

@interface EQKitStringBox : EQKitBox {
    struct __CTLine { } *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mErasableBounds;
    BOOL mDimensionsValid;
}

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct __CTLine { } *line;
@property (readonly, nonatomic) struct CGColor { } *color;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appendOpticalAlignToSpec:(void *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithAttributedString:(id)a0 cgColor:(struct CGColor { } *)a1;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
