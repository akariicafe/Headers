@interface PXPhotosMetadataCountsCache : NSObject

@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } assetCounts;
@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } guestAssetCounts;

- (id)initWithAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 guestAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;

@end
