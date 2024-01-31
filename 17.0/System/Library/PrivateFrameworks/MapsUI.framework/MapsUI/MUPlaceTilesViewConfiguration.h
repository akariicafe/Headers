@class MUPlaceTileCellConfiguration;

@interface MUPlaceTilesViewConfiguration : NSObject

@property (readonly, nonatomic) MUPlaceTileCellConfiguration *cellConfiguration;
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) BOOL shouldDrawPlatter;

+ (id)annotatedListConfiguration;
+ (id)configurationFromModuleConfiguration:(id)a0;
+ (id)hikingTrailsConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
