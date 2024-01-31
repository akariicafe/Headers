@class VNRegionOfInterestTiling;

@interface VNRegionOfInterestTile : NSObject {
    VNRegionOfInterestTiling *_tiling;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pixelPixelCropRect;
}

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelCropRect;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTiling:(id)a0 pixelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
