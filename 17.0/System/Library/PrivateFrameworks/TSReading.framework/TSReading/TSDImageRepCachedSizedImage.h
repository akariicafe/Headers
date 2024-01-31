@interface TSDImageRepCachedSizedImage : NSObject {
    struct CGImage { } *mImageRef;
    struct CGPath { } *mImageMaskPath;
}

@property (nonatomic) struct CGImage { } *imageRef;
@property (nonatomic) struct CGPath { } *imageMaskPath;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) BOOL imageHasMaskBakedIn;
@property (nonatomic) BOOL imageHasAdjustmentsBakedImage;

- (void)dealloc;

@end
