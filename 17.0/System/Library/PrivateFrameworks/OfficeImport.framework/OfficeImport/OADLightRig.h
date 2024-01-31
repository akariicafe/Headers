@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (void)setType:(int)a0;
- (int)direction;
- (id)init;
- (unsigned long long)hash;
- (id)rotation;
- (id)description;
- (void)setDirection:(int)a0;
- (void).cxx_destruct;
- (void)setRotation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
