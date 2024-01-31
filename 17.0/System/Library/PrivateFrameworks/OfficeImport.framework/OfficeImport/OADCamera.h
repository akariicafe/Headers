@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (float)zoom;
- (void)setZoom:(float)a0;
- (id)init;
- (unsigned long long)hash;
- (float)fieldOfView;
- (id)rotation;
- (id)description;
- (void).cxx_destruct;
- (void)setRotation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setFieldOfView:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)cameraType;
- (void)setCameraType:(int)a0;

@end
