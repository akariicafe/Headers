@interface PXExploreParsingState : NSObject

@property (nonatomic) long long parseLocation;
@property (nonatomic) double buildingBlockAspectRatio;
@property (nonatomic) long long nextRowType;
@property (nonatomic) long long nextHeroSide;
@property (readonly, nonatomic) BOOL canIgnoreNextHeroSide;
@property (nonatomic) long long numberOfConsecutiveMediumHeroRows;
@property (nonatomic) long long effectiveLargeHeroDensity;
@property (nonatomic) long long numberOfColumnsOverride;
@property (nonatomic) long long lastHeroRowTag;
@property (nonatomic) BOOL didMoveBestItemOutOfNextShortRow;
@property (nonatomic) BOOL didMoveBestItemOutOfPreviousShortRowIntoHeroRow;

- (void)prepareWithMetrics:(id)a0;

@end
