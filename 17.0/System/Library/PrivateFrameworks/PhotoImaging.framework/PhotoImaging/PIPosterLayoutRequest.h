@class PFWallpaperCompoundDeviceConfiguration;
@protocol NUImageBuffer, PFParallaxAssetRegions;

@interface PIPosterLayoutRequest : NURenderRequest

@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (retain, nonatomic) id<PFParallaxAssetRegions> layoutRegions;
@property (nonatomic) BOOL shouldConstrainLayoutToBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLayoutBounds;
@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUImageBuffer> segmentationConfidenceMap;
@property (nonatomic) unsigned long long segmentationClassification;
@property (nonatomic) BOOL shouldComputeAllScores;
@property (nonatomic) BOOL shouldConsiderHeadroom;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
