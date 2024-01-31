@interface CSCoverSheetDismissGestureSettings : PTSettings

@property (nonatomic) BOOL usesGrapeFlags;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double recognizeAlongEdge;
@property (nonatomic) BOOL extendSwipeUpRegion;
@property (nonatomic) double extendedEdgeRegionSize;
@property (nonatomic) double extendedRegionInsetX;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
