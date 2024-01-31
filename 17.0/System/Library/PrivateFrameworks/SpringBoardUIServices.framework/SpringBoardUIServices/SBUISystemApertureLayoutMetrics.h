@interface SBUISystemApertureLayoutMetrics : NSObject

@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } minimumScreenEdgeInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sensorRegionSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } interSensorRegionInWindowSpace;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumMinimalSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumHorizontalMinimalViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumCompactSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumCompactSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumLeadingTrailingViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } compactConcentricAreaSize;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } compactLegibleAreaInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumMicroNoticeSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumMicroNoticeSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } microNoticeConcentricAreaSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumExpandedSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumExpandedSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expandedConcentricAreaSize;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } expandedLegibleAreaInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } expandedControlsAreaInsets;
@property (readonly, nonatomic) double minimumContinuousCornerRadius;
@property (readonly, nonatomic) double maximumContinuousCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumPossibleSizeWhilePresentingMenu;

+ (BOOL)_deviceNativeScreenSizeIsLargePhone;
+ (double)_nativeScreenWidth;
+ (id)sharedInstanceForEmbeddedDisplay;

- (double)_maximumWidth;
- (struct CGSize { double x0; double x1; })_inertSize;
- (double)_minimumScreenEdgeInset;

@end
