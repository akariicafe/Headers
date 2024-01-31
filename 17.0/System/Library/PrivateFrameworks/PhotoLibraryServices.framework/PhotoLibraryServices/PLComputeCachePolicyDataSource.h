@class PLPhotoLibrary, NSDate;

@interface PLComputeCachePolicyDataSource : NSObject <PLComputeCachePolicyDataSource> {
    PLPhotoLibrary *_photoLibrary;
    long long _restoreState;
}

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long restoreState;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSDate *lastSnapshotDate;
@property (readonly, nonatomic) long long iCloudStorageSizeInBytes;

- (void).cxx_destruct;
- (BOOL)hasAtLeastExpungedAssetCount:(unsigned long long)a0;
- (id)initWithPhotoLibrary:(id)a0 restoreState:(long long)a1;

@end
