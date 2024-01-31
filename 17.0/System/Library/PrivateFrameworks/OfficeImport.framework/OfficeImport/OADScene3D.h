@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (id)init;
- (unsigned long long)hash;
- (void)setBackdrop:(id)a0;
- (void)setCamera:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)backdrop;
- (BOOL)isEqual:(id)a0;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lightRig;
- (void)setLightRig:(id)a0;

@end
