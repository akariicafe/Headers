@class NSString, PXStoryMultipartPanoramaParameters, NSArray;
@protocol PXStorySongResource, PXAudioCueSource;

@interface PXStoryConcreteThumbnailOnlyStyle : NSObject <PXStoryTimelineStyle, PXStoryStyle> {
    NSArray *_allowedClipCompositions;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultDisplayAssetPresentationDuration;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;
@property (readonly, nonatomic) BOOL allowsIncompleteTimelines;
@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, nonatomic) id<PXAudioCueSource> cueSource;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } outroDuration;
@property (readonly, nonatomic) BOOL isCustomized;

- (id)init;
- (void).cxx_destruct;
- (id)allowedClipCompositionsWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nextDisplayAssets:(id)a1;
- (BOOL)allowsMultipartPanoramaForDisplayAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; })audioInfoForDisplayAsset:(id)a0;
- (id)clipCompositionForKeyAsset:(id)a0 contentInfo:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a1 finalPlaybackStyle:(long long)a2;
- (double)composabilityScoreForSegmentWithDisplayAssets:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })contentInfoForDisplayAsset:(id)a0;
- (id)createRandomNumberGenerators;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })durationInfoForSegmentWithDisplayAssets:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1 assetContentInfos:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 finalPlaybackStyles:(const long long *)a3 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a5 separatorEffectParameters:(const struct { unsigned int x0; double x1; double x2; } *)a6 separatorEffectContext:(long long)a7 buffer:(struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a8 usingBlock:(id /* block */)a9;
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1 finalPlaybackStyles:(const long long *)a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 durationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a4 buffer:(struct { unsigned int x0; double x1; double x2; } *)a5 usingBlock:(id /* block */)a6;
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)a0;
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id)a0 originalPlaybackStyle:(long long)a1;
- (id)initWithCustomColorGradeKind:(long long)a0 originalColorGradeCategory:(id)a1;
- (BOOL)isOriginalPlaybackStyleAllowedInNUp:(long long)a0;
- (id)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 proposedCropContentsRects:(id)a2 axis:(long long)a3 normalizedKenBurnsEffectParameters:(struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; } *)a4 durationInfos:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } *)a5 transitionInfos:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } *)a6;
- (id)timelineStyleWithSpec:(id)a0 resourcesDataSource:(id)a1 randomNumberGenerators:(id)a2 errorReporter:(id)a3;
- (struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })transitionInfoForSegmentWithClipComposition:(id)a0 displayAssets:(id)a1;

@end
