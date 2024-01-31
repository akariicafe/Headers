@class NSIndexSet, IOSurface, NSDictionary, NSNumber;

@interface MADRemoveBackgroundMaskResult : MADResult {
    IOSurface *_instanceMaskSurface;
    NSDictionary *_perInstanceMaskSurfaces;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _instanceMaskPixelBuffer;
    struct CF<CGImage *> { struct CGImage *value_; } _instanceMaskImage;
}

@property (readonly, nonatomic) NSNumber *animatedStickerScore;
@property (readonly, nonatomic) NSIndexSet *allInstances;
@property (readonly, nonatomic) struct __CVBuffer { } *instanceMaskPixelBuffer;
@property (readonly, nonatomic) struct CGImage { } *instanceMaskImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRegionOfInterest;
@property (readonly, nonatomic) float confidence;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInstances:(id)a0 instanceMaskSurface:(id)a1 perInstanceMaskSurfaces:(id)a2 sourceRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(float)a4 animatedStickerScore:(id)a5;
- (id)maskImagesForInstances:(id)a0 error:(id *)a1;
- (id)maskPixelBuffersForInstances:(id)a0 error:(id *)a1;

@end
