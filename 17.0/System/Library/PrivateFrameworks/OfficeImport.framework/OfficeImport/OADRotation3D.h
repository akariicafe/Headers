@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (unsigned long long)hash;
- (float)latitude;
- (id)description;
- (float)longitude;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;
- (float)revolution;

@end
