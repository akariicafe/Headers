@interface KNLiveVideoMaskGeometry : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskBounds;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normalizedOffset;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoTextureRectForNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMaskBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 normalizedOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoBoundsForNaturalSize:(struct CGSize { double x0; double x1; })a0;

@end
