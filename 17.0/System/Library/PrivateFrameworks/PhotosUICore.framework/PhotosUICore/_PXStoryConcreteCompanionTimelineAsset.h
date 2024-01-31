@class PHAsset;
@protocol PXStoryCompanionColorEffect, PXStoryClip;

@interface _PXStoryConcreteCompanionTimelineAsset : NSObject <PXStoryCompanionTimelineAsset>

@property (readonly, nonatomic) id<PXStoryClip> clip;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) PHAsset *photoLibraryAsset;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } videoTimeRange;
@property (readonly, nonatomic) struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; } initialContentsRect;
@property (readonly, nonatomic) struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; } finalContentsRect;
@property (readonly, nonatomic) id<PXStoryCompanionColorEffect> colorNormalizationEffect;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 clip:(id)a1;

@end
