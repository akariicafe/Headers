@class NSArray;

@interface GEOStorefrontCamera : NSObject

@property (readonly, nonatomic) int cameraNumber;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) struct GEOOrientedPosition { struct { double x; double y; double z; } position; float yaw; float pitch; float roll; } position;
@property (readonly, nonatomic) unsigned char lensType;
@property (readonly, nonatomic) struct GEOLensModel { float fovS; float fovH; float k2; float k3; float k4; float cx; float cy; float lx; float ly; } projection;
@property (readonly, nonatomic) NSArray *textureIds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCameraMetadata:(id)a0;

@end
