@class NSData;

@interface VKSnapshotElevationRaster : NSObject <NSSecureCoding> {
    int _width;
    int _height;
    float _elevationScale;
    float _scale;
    float _tileSizeInMeters;
    short _minElevationInMeters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct QuadTile { unsigned char _type; unsigned char _level; int _yIdx; int _xIdx; } tile;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) float tileSizeInMeters;
@property (readonly, nonatomic) short minElevationInMeters;
@property (retain, nonatomic) NSData *rasterData;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (float)_rasterElevationInMetersAtPoint:(struct Matrix<int, 2, 1> { int x0[2]; })a0;
- (float)getElevationAtPoint:(const void *)a0;
- (id)initWithQuadTile:(struct QuadTile { unsigned char x0; unsigned char x1; int x2; int x3; })a0 width:(int)a1 height:(int)a2 scale:(float)a3 tileSizeInMeters:(float)a4 minElevationInMeters:(short)a5;

@end
