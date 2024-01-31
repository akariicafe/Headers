@interface ADWorldToImageProjection : NSObject {
    struct WorldToImageProjection { void /* function */ **x0; } *_projection;
}

- (void)projectPoints:(void *)a0 count:(unsigned int)a1;
- (void)dealloc;
- (id)initWithPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 calibration:(id)a1;

@end
