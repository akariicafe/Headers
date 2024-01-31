@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (void)setAnchor:(id)a0;
- (id)anchor;
- (id)init;
- (unsigned long long)hash;
- (void)setUp:(id)a0;
- (id)description;
- (id)up;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)normal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setNormal:(id)a0;

@end
