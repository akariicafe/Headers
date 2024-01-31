@class PXRadarConfiguration;

@interface PXDuplicatesRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>

@property (readonly, nonatomic) BOOL includeAssetImages;
@property (readonly, nonatomic) BOOL includeAssetThumbnails;
@property (readonly, nonatomic) PXRadarConfiguration *radarConfiguration;

@end
