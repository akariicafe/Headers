@class NSString;

@interface _PXStoryConcreteAspectFitOneUpClipComposition : NSObject <PXStoryClipComposition> {
    long long _clipAssetIndex;
}

@property (readonly, nonatomic) long long numberOfClips;
@property (readonly, nonatomic) BOOL clipFramesExtendToBounds;
@property (readonly, nonatomic) long long mainDividerAxis;
@property (readonly, nonatomic) const long long *dividerAxes;
@property (readonly, nonatomic) double mainDividerSplitRatio;
@property (readonly, nonatomic) const long long *clipAssetIndexes;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, nonatomic) NSString *label;

- (id)init;
- (id)description;
- (void)getClipFrames:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forContext:(const struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; } *)a1;

@end
