@class CSLayoutStrategy, CSMagSafeRingConfiguration;

@interface CSMagSafeAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>

@property (nonatomic) CSMagSafeRingConfiguration *ring;
@property (nonatomic) CSMagSafeRingConfiguration *auxiliaryRing;
@property (nonatomic) BOOL staticViewNeeded;
@property (nonatomic) double staticViewRingDiameter;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleScreenCoordinatesForSleeve;

+ (id)defaultConfiguration;
+ (id)batteryCaseConfiguration;
+ (id)configuration:(id)a0 withBatteryPack:(BOOL)a1;
+ (id)staticViewConfiguration;

- (double)bottomContentInset;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)complicationContainerHeight;
- (void).cxx_destruct;
- (double)timeLabelBaselineY;
- (BOOL)containsCenteredDateTimeLayout;
- (double)dateBaselineToComplicationY;
- (double)dateTimeMostExtremeLeadingX;
- (double)dateTimeMostExtremeTrailingX;
- (double)dateTimeSubtitleMaximumWidth;
- (id)initWithStaticViewNeeded:(BOOL)a0;
- (double)listMinY;
- (double)prominentBaselineToListY;
- (double)timeLabelOffsetForScrollPercent:(double)a0;
- (double)windowedAccessoryInset;

@end
