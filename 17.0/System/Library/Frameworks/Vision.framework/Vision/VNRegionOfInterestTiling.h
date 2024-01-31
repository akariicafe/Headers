@class NSArray;

@interface VNRegionOfInterestTiling : NSObject {
    unsigned long long _pixelOriginX;
    unsigned long long _pixelOriginY;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pixelBounds;
@property (readonly) unsigned long long pixelWidth;
@property (readonly) unsigned long long pixelHeight;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelRegionOfInterest;
@property (readonly) unsigned long long tileRowsCount;
@property (readonly) unsigned long long tileColumnsCount;
@property (readonly) unsigned long long tileCount;
@property (readonly, copy) NSArray *tiles;

+ (id)tilingForRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inPixelBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 tileAspectRatio:(double)a2 options:(id)a3;
+ (id)tilingForRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inPixelWidth:(unsigned long long)a1 height:(unsigned long long)a2 tileAspectRatio:(double)a3 options:(id)a4;

- (void).cxx_destruct;
- (void)_calculateTilesHorizontally:(BOOL)a0 vertically:(BOOL)a1 tileAspectRatio:(double)a2 overlapPercentage:(double)a3 tileOverflowCount:(unsigned long long)a4 addTileBlock:(id /* block */)a5 columnCount:(unsigned long long *)a6 rowCount:(unsigned long long *)a7;
- (void)_calculateTilesWithAspectRatio:(double)a0 options:(id)a1;
- (id)_initWithPixelOriginX:(unsigned long long)a0 Y:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)enumerateTilesUsingBlock:(id /* block */)a0;

@end
