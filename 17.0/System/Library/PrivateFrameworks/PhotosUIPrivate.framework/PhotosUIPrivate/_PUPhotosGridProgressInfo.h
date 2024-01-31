@class NSString, PHAsset, PHAssetCollection, NSIndexPath;

@interface _PUPhotosGridProgressInfo : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHAssetCollection *collection;
@property (retain, nonatomic) NSIndexPath *cachedIndexPath;
@property (nonatomic) double progress;

- (void).cxx_destruct;

@end
