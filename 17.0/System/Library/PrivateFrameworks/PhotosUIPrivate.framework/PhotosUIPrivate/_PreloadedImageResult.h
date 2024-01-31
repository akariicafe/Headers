@class UIImage, NSString;
@protocol PUDisplayAsset;

@interface _PreloadedImageResult : NSObject <PUImageRequesterResult>

@property (readonly, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL imageIsFullQuality;
@property (readonly, nonatomic) struct CGImage { } *gainMapImage;
@property (readonly, nonatomic) float gainMapValue;
@property (readonly, nonatomic) double timeIntervalSinceRequest;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, nonatomic) NSString *debugDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPreloadedImage:(id)a0;

@end
