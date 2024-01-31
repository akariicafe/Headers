@class NSString;

@interface PXPlacesMapThumbnailLocationCurator : NSObject <PXPlacesMapThumbnailCurationDelegate>

@property (readonly, nonatomic) Class locationCuratorClass;
@property (readonly, nonatomic) unsigned long long curatedThumbnailsLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
