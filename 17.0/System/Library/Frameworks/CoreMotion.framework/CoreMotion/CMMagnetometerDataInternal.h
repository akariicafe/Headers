@interface CMMagnetometerDataInternal : NSObject <NSCopying> {
    struct { float x; float y; float z; } fMagneticField;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMagneticField:(struct { float x0; float x1; float x2; })a0;
- (void)setMagneticField:(struct { float x0; float x1; float x2; })a0;

@end
