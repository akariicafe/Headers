@class NSIndexPath;
@protocol PHAssetCollectionDataSource;

@interface PUPhotosSharingTransitionContext : NSObject

@property (retain, nonatomic) id<PHAssetCollectionDataSource> assetCollectionsDataSource;
@property (retain, nonatomic) NSIndexPath *keyAssetIndexPath;

- (void).cxx_destruct;

@end
