@class NSString, VNImageRequestHandler;

@interface VCPMADVIRemoveBackgroundCachedImageHandler : NSObject {
    NSString *_identifier;
    struct CGSize { double width; double height; } _resolution;
    unsigned int _orientation;
}

@property (readonly, nonatomic) VNImageRequestHandler *requestHandler;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;

- (void).cxx_destruct;
- (id)initWithImageAsset:(id)a0 requestHandler:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)matchesImageAsset:(id)a0;

@end
