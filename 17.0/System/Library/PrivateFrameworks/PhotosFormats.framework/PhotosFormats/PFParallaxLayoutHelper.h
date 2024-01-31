@class PFParallaxLayoutConfiguration;

@interface PFParallaxLayoutHelper : NSObject

@property (class, nonatomic) double scoreBonusOverlapAvoid;

@property (readonly, nonatomic) unsigned long long classification;
@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } extendedImageSize;
@property (readonly, nonatomic) BOOL headroomFeasible;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelValidBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelEffectiveAcceptable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelEffectivePreferred;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (readonly, nonatomic) BOOL canInflate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inflatePersonFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)scoreBonusInactiveWithLayoutType:(unsigned long long)a0;
+ (double)scoreBonusOverlapTargetWithLayoutType:(unsigned long long)a0;
+ (double)scoreBonusZoomHeadroomWithLayoutType:(unsigned long long)a0;
+ (double)scoreBonusZoomNoneWithLayoutType:(unsigned long long)a0;
+ (double)scoreBonusZoomTargetWithLayoutType:(unsigned long long)a0;
+ (void)setScoreBonusInactive:(double)a0;
+ (void)setScoreBonusOverlapTarget:(double)a0;
+ (void)setScoreBonusZoomHeadroom:(double)a0;
+ (void)setScoreBonusZoomTarget:(double)a0;
+ (void)setTargetZoomFactorLimit:(double)a0;
+ (void)setTargetZoomPercent:(double)a0;
+ (double)targetZoomFactorLimitWithLayoutType:(unsigned long long)a0;
+ (double)targetZoomPercentWithLayoutType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)bestLayout:(id)a0;
- (double)computeCropScoreForIntermediate:(id)a0;
- (struct CGSize { double x0; double x1; })imageSizeWithHeadroomStrategy:(unsigned long long)a0;
- (id)initWithPosterClassification:(unsigned long long)a0 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 validBoundsNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 headroomFeasible:(BOOL)a6 layoutType:(unsigned long long)a7 layoutConfiguration:(id)a8;
- (id)intermediateWithHeadroomStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithInactiveStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithParallaxStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithZoomStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (double)scoreAdjustmentWithUnscoredIntermediate:(id)a0 unsafeAreaOverlap:(double)a1 timeBottomOverlap:(double)a2 timeTopOverlap:(double)a3;
- (id)scoreIntermediate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unsafeAreaInImageSpaceWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
