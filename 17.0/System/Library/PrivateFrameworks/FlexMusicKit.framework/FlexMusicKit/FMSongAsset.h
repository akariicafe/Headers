@class NSString, NSURL;

@interface FMSongAsset : NSObject {
    double _downloadProgress;
}

@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (retain) NSString *songUID;
@property (readonly) NSString *assetID;
@property (readonly) unsigned long long assetStatus;
@property (readonly) NSURL *localURL;
@property (readonly, nonatomic) BOOL isCloudBacked;
@property (readonly, nonatomic) double downloadProgress;
@property (readonly, nonatomic) BOOL contentUpdateAvailable;

- (void)cancelDownload;
- (void).cxx_destruct;
- (void)requestDownload;
- (BOOL)contentUpdateAvaliable;
- (BOOL)localURLExists;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (void)purgeLocalCache;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 contentVersion:(long long)a3 compatibilityVersion:(long long)a4;
- (id)initWithURL:(id)a0 assetID:(id)a1 contentVersion:(long long)a2 compatibilityVersion:(long long)a3;
- (void)requestDownloadWithOptions:(id)a0;
- (BOOL)updateDownloadProgress:(double)a0;

@end
