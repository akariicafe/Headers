@interface OADPoint3D : NSObject <NSCopying> {
    float mX;
    float mY;
    float mZ;
}

- (float)x;
- (unsigned long long)hash;
- (float)y;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (float)z;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
