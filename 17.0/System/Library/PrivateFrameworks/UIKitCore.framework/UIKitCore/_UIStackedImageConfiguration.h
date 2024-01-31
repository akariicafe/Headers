@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long maximumParallaxImages;
@property (nonatomic) double maximumParallaxDepth;
@property (nonatomic) double overlayDepth;
@property (nonatomic) BOOL overlayFixedFrame;
@property (nonatomic) double zDepth;
@property (nonatomic) BOOL adjustMotionForSize;
@property (nonatomic) double rotationAmount;
@property (nonatomic) double scaleSizeIncrease;
@property (nonatomic) double pressedScaleAdjustment;
@property (nonatomic) struct CGPoint { double x; double y; } translationOffset;
@property (nonatomic) double unmaskedOverlayScaleFactor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isContinuousCornerRadiusEnabled) double continuousCornerRadiusEnabled;
@property (nonatomic) BOOL flatImageContainsCornerRadius;
@property (nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property (nonatomic) double specularHighlightVerticalPosition;
@property (nonatomic) double specularHighlightVerticalPositionSensitivity;
@property (nonatomic) double specularOpacity;
@property (nonatomic) double defaultFocusedShadowOpacity;
@property (nonatomic) double defaultHighlightedShadowOpacity;
@property (nonatomic) double defaultUnfocusedShadowOpacity;
@property (nonatomic) double fullBleedFocusedShadowOpacity;
@property (nonatomic) double fullBleedUnfocusedShadowOpacity;
@property (nonatomic) double focusCursorShadowOpacityAdjustment;
@property (nonatomic) double defaultFocusedShadowRadius;
@property (nonatomic) double defaultHighlightedShadowRadius;
@property (nonatomic) double defaultUnfocusedShadowRadius;
@property (nonatomic) double fullBleedFocusedShadowRadius;
@property (nonatomic) double fullBleedUnfocusedShadowRadius;
@property (nonatomic) double defaultFocusedShadowVerticalOffset;
@property (nonatomic) double defaultHighlightedShadowVerticalOffset;
@property (nonatomic) double defaultUnfocusedShadowVerticalOffset;
@property (nonatomic) double defaultSelectedShadowVerticalOffset;
@property (nonatomic) BOOL useSeparateUnfocusedShadowImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL allowsNonOpaqueShadow;
@property (nonatomic) BOOL boostBrightness;
@property (nonatomic) BOOL hueShift;
@property (nonatomic) BOOL disableMask;
@property (nonatomic) BOOL focusCursorEnabled;
@property (nonatomic) double focusCursorBorderWidth;
@property (nonatomic) double radiosityOffset;
@property (nonatomic) double radiosityStrength;
@property (readonly, copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic) double shadowSelectionDuration;
@property (nonatomic) double shadowUnselectionDuration;
@property (nonatomic) double repositionUnselectionDuration;
@property (nonatomic) double layerSelectionDuration;
@property (nonatomic) double layerUnselectionDuration;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) double pressedDuration;
@property (nonatomic) double unpressedDuration;
@property (nonatomic) BOOL fullBleedCenteredGrowth;
@property (nonatomic) double fullBleedOffset;

+ (id)newAppIconConfiguration;
+ (id)newStandardConfiguration;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_highContrastFocusIndicatorChanged:(id)a0;

@end
