@interface MFPBlurEffect : MFPEffect {
    float mRadius;
    BOOL mExpandEdge;
}

+ (id)GUID;

- (id)initWithRadius:(float)a0 expandEdge:(BOOL)a1;

@end
