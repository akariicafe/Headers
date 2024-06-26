@class NSArray, UIImageView, CAMZoomDialDotsView, UIView, NSObject;
@protocol OS_dispatch_queue;

@interface CAMZoomDial : UIView

@property (readonly, nonatomic) BOOL _useDots;
@property (readonly, nonatomic) BOOL _useTicks;
@property (readonly, nonatomic) double _backgroundAlpha;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (readonly, nonatomic) UIView *_contentContainerView;
@property (readonly, nonatomic) UIView *_labelContainerView;
@property (readonly, nonatomic) UIView *_focalLengthLabelContainerView;
@property (readonly, nonatomic) UIImageView *_ticksView;
@property (readonly, nonatomic) UIImageView *_contentMaskView;
@property (readonly, nonatomic) UIView *_needleView;
@property (retain, nonatomic, setter=_setFocalLengthLabelsPortrait:) NSArray *_focalLengthLabelsPortrait;
@property (retain, nonatomic, setter=_setFocalLengthLabelsLandscape:) NSArray *_focalLengthLabelsLandscape;
@property (retain, nonatomic, setter=_setLabels:) NSArray *_labels;
@property (readonly, nonatomic) CAMZoomDialDotsView *_activeDots;
@property (readonly, nonatomic) CAMZoomDialDotsView *_inactiveDots;
@property (readonly, nonatomic) double _fullRadius;
@property (readonly, nonatomic) double _fullRadiusInset;
@property (readonly, nonatomic) double _radiusDelta;
@property (readonly, nonatomic) double _borderStrokeWidth;
@property (readonly, nonatomic) double _tickLabelCenterRadialInset;
@property (readonly, nonatomic) double _focalLengthInsetPortrait;
@property (readonly, nonatomic) double _focalLengthInsetLandscape;
@property (readonly, nonatomic) double _labelPaddingForContentSizeCategory;
@property (nonatomic, getter=_isBackgroundViewUpdateNeeded, setter=_setBackgroundViewUpdateNeeded:) BOOL _backgroundViewUpdateNeeded;
@property (nonatomic, getter=_isLabelsUpdateNeeded, setter=_setLabelsUpdateNeeded:) BOOL _labelsUpdateNeeded;
@property (nonatomic, getter=_isDotsUpdateNeeded, setter=_setDotsUpdateNeeded:) BOOL _dotsUpdateNeeded;
@property (nonatomic, getter=_isTicksUpdateNeeded, setter=_setTicksUpdateNeeded:) BOOL _ticksUpdateNeeded;
@property (nonatomic, getter=_isMaskUpdateNeeded, setter=_setMaskUpdateNeeded:) BOOL _maskUpdateNeeded;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_imageGenerationQueue;
@property (nonatomic, setter=_setBackgroundImageJobIdentifier:) long long _backgroundImageJobIdentifier;
@property (nonatomic, setter=_setTicksImageJobIdentifier:) long long _ticksImageJobIdentifier;
@property (nonatomic, setter=_setMaskImageJobIdentifier:) long long _maskImageJobIdentifier;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) NSArray *zoomFactors;
@property (retain, nonatomic) NSArray *zoomPoints;
@property (readonly, nonatomic) double minimumZoomFactor;
@property (readonly, nonatomic) double maximumZoomFactor;
@property (nonatomic) double minAvailableZoomFactor;
@property (nonatomic) double maxAvailableZoomFactor;
@property (nonatomic) double zoomFactor;
@property (nonatomic) double contentMaskingHeight;
@property (nonatomic) double contractionDistance;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL hideLabels;
@property (nonatomic) BOOL hideFocalLengthLabels;
@property (readonly, nonatomic) NSArray *activeZoomFactorLabels;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } dialCenter;
@property (readonly, nonatomic) double dotCenterInset;
@property (readonly, nonatomic) double dialBorderWidth;
@property (nonatomic) double angleDeltaForZoomRange;

+ (struct CGPoint { double x0; double x1; })_pointForOffsetAngle:(double)a0 dialCenter:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2;
+ (id)_createTicksImageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dialCenter:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 pixelWidth:(double)a3 zoomFactors:(id)a4 minAvailableZoomFactor:(double)a5 maxAvailableZoomFactor:(double)a6 signedAngleDeltaForZoomRange:(double)a7;
+ (double)_normalizedValueForZoomFactor:(double)a0 min:(double)a1 max:(double)a2;
+ (id)_createMaskImageWithSize:(struct CGSize { double x0; double x1; })a0 tickLabelCenterRadialInset:(double)a1 notchMaskImage:(id)a2;
+ (double)_offsetAngleForZoomFactor:(double)a0 relativeToCurrentZoomFactor:(BOOL)a1 currentZoomFactor:(double)a2 min:(double)a3 max:(double)a4 signedAngleDeltaForZoomRange:(double)a5;
+ (id)_createBackgroundImageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dialCenter:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 backgroundAlpha:(double)a3 borderStrokeWidth:(double)a4;

- (void)_updateLabels;
- (struct CGPoint { double x0; double x1; })_tickEndpointForOffsetAngle:(double)a0 isTop:(BOOL)a1;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_updateLabelsIfNeeded;
- (void)_updatePortraitFocalLengthLabelAlphas;
- (struct CGPoint { double x0; double x1; })_pointForOffsetAngle:(double)a0 radialInset:(double)a1 assumeExpanded:(BOOL)a2;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (struct CGPoint { double x0; double x1; })_dotCenterForZoomFactor:(double)a0 assumeExpanded:(BOOL)a1 relativeToCurrentZoomFactor:(BOOL)a2;
- (void)_updateDots;
- (double)_labelRotationAngleForOrientation;
- (void)_updateFocalLengthLabels;
- (void)_commonCAMZoomDialInitialization;
- (struct CGPoint { double x0; double x1; })_dotCenterForOffsetAngle:(double)a0 assumeExpanded:(BOOL)a1;
- (double)_offsetAngleForZoomFactor:(double)a0 relativeToCurrentZoomFactor:(BOOL)a1;
- (void)_layoutBackgroundAndContainerWithContentInset:(double)a0;
- (void)_updateTicksImageIfNeeded;
- (struct CGPoint { double x0; double x1; })textCenterForZoomFactor:(double)a0 assumeExpanded:(BOOL)a1;
- (void)_updateBackroundImageViewIfNeeded;
- (struct CGPoint { double x0; double x1; })_textCenterForOffsetAngle:(double)a0 assumeExpanded:(BOOL)a1;
- (double)_signedAngleDeltaForZoomRange;
- (id)_createDotImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_offsetAngleForZoomPoint:(id)a0;
- (double)zoomFactorForOffsetAngle:(double)a0;
- (double)zoomFactorForNormalizedValue:(double)a0;
- (void)_updateContentIfNeeded;
- (void)_layoutSubviewsWithDots;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)offsetAngleForZoomFactor:(double)a0;
- (void)_updateMinimizedLabels;
- (void).cxx_destruct;
- (id)_zoomPointIndexesForPrioritizedFocalLengthLabels;
- (void)_invalidateImagesForViewSize;
- (double)normalizedValueForZoomFactor:(double)a0;
- (void)_updateMaskImageIfNeeded;
- (void)layoutSubviews;
- (void)_layoutSubviewsWithTicks;
- (double)offsetAngleForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateFocalLengthLabelAlphas;

@end
