@class UIImage, NSString;
@protocol PUDisplayAsset;

@interface _PUImageRequesterResult : NSObject <PUImageRequesterResult>

@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (nonatomic) struct CGImage { } *gainMapImage;
@property (nonatomic) float gainMapValue;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL imageIsFullQuality;
@property (nonatomic) double timeIntervalSinceRequest;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) NSString *debugDescription;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
