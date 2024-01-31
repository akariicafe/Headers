@interface PKStrokeSelectionImageConfig : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokeBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewBounds;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) BOOL invertedColors;
@property (readonly, nonatomic) BOOL rotated;
@property (readonly, nonatomic) BOOL sixChannel;
@property (readonly, nonatomic) BOOL highlighted;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrokeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 imageSize:(struct CGSize { double x0; double x1; })a3 invertedColors:(BOOL)a4 rotated:(BOOL)a5 sixChannel:(BOOL)a6 highlighted:(BOOL)a7;

@end
