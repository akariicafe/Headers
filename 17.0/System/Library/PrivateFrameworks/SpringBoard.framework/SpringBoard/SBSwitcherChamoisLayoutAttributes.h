@class SBSwitcherChamoisSettings, NSArray, NSString, SBSwitcherChamoisSnapPaddingSettings;

@interface SBSwitcherChamoisLayoutAttributes : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (weak, nonatomic) SBSwitcherChamoisSettings *settings;
@property (nonatomic) BOOL requiresFullScreen;
@property (nonatomic) struct CGSize { double width; double height; } defaultWindowSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumDefaultWindowSize;
@property (nonatomic) double maximumWindowHeightWithDock;
@property (nonatomic) double maximumWindowWidthForOverlapping;
@property (nonatomic) double minimumWindowWidth;
@property (nonatomic) double containerPerspective;
@property (nonatomic) double screenEdgePadding;
@property (nonatomic) SBSwitcherChamoisSnapPaddingSettings *snapPaddingSettings;
@property (nonatomic) double stripWidth;
@property (nonatomic) double stripVerticalEdgeSpacing;
@property (nonatomic) double stripInterItemSpacing;
@property (nonatomic) double stripTiltAngle;
@property (nonatomic) double stripIconLength;
@property (nonatomic) double stripStackDistance;
@property (nonatomic) double stripCardScale;
@property (nonatomic) double stripCornerRaddii;
@property (nonatomic) double stageCornerRaddii;
@property (nonatomic) double stageInterItemSpacing;
@property (nonatomic) double stageOccludedAppScale;
@property (nonatomic) double stageStatusBarClearingAppScale;
@property (nonatomic) double stageOcclusionDodgingPeekLength;
@property (nonatomic) double stageOcclusionDodgingPeekScale;
@property (nonatomic) unsigned long long numberOfRowsWhileInApp;
@property (nonatomic) BOOL prefersStripHidden;
@property (nonatomic) BOOL prefersDockHidden;
@property (nonatomic) BOOL usesStripAreaForOverlapping;
@property (copy, nonatomic) NSArray *gridWidths;
@property (copy, nonatomic) NSArray *gridHeights;
@property (nonatomic) double switcherHorizontalEdgeSpacing;
@property (nonatomic) double switcherHorizontalInterItemSpacing;
@property (nonatomic) double switcherVerticalEdgeSpacing;
@property (nonatomic) double switcherVerticalInterItemSpacing;
@property (nonatomic) double switcherHeightForIconAndLabelsUnderEachPile;
@property (nonatomic) double switcherPileCardMinimumPeekAmount;
@property (nonatomic) double switcherPileCompactingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)partiallyOccludedStageScaleForItemWithSize:(struct CGSize { double x0; double x1; })a0;

@end
