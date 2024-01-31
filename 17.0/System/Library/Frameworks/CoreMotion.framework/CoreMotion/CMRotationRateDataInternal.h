@interface CMRotationRateDataInternal : NSObject <NSCopying> {
    struct { float x; float y; float z; } fRotationRate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRotationRate:(struct { float x0; float x1; float x2; })a0;
- (void)setRotationRate:(struct { float x0; float x1; float x2; })a0;

@end
