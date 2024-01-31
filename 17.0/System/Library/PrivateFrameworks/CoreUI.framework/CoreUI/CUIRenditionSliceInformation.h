@interface CUIRenditionSliceInformation : NSObject <NSCopying> {
    double _boundaries[4];
}

@property (readonly, nonatomic) long long renditionType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (readonly, nonatomic) struct { double top; double left; double bottom; double right; } edgeInsets;

- (struct CGSize { double x0; double x1; })_topLeftCapSize;
- (id)initWithSliceInformation:(id)a0 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })_bottomRightCapSize;
- (id)description;
- (double)positionOfSliceBoundary:(unsigned long long)a0;
- (id)initWithRenditionType:(long long)a0 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 topLeftInset:(struct CGSize { double x0; double x1; })a2 bottomRightInset:(struct CGSize { double x0; double x1; })a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
