@interface PXDiscoveryFeedGenerationOptions : NSObject <NSCopying>

@property (nonatomic) BOOL usePhotoAnalysisdThroughXPC;
@property (nonatomic) unsigned long long discoveryRankingMode;

- (id)init;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
