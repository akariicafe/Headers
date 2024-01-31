@interface ARImageCroppingTechnique : ARTechnique {
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct __CVPixelBufferPool { } *_croppedPixelBufferPool;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    BOOL _isCropToTargetResolution;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } croppedImageSize;

- (void)dealloc;
- (id)processData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCroppedImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCroppedImageSize:(struct CGSize { double x0; double x1; })a0 centerCropToTargetResolution:(BOOL)a1;
- (unsigned long long)requiredSensorDataTypes;

@end
