@class NSURL, NSString, NSArray;

@interface PIParallaxAsset : NSObject <PFParallaxAsset> {
    NSURL *_videoComplementURL;
    float _motionScore;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *cacheURL;
@property (nonatomic) BOOL isInCloud;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gazeAreaRect;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsSegmentationResourceCaching;
@property (readonly, nonatomic) NSURL *segmentationResourceURL;

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)cancelMotionScoreRequest:(int)a0;
- (void)cancelParallaxResourceRequest:(int)a0;
- (void)cancelPetsRegionsRequest:(int)a0;
- (BOOL)clearSegmentationResourceCacheWithError:(id *)a0;
- (int)loadMotionScore:(id /* block */)a0;
- (int)loadParallaxResource:(long long)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)loadPetsRegions:(id /* block */)a0;
- (void)updateSegmentationResource:(id /* block */)a0;

@end
