@class NSURL, NSString, _TVURLSessionDownloadTaskWrapper;

@interface VUILayeredImageProxy : NSObject {
    _TVURLSessionDownloadTaskWrapper *_downloadTaskWrapper;
}

@property (getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long groupType;
@property (readonly, copy, nonatomic) NSString *assetKey;

+ (id)_loadingQueue;

- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isLoading;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 groupType:(long long)a1 assetKey:(id)a2;
- (id)_assetPathWithAssetKey:(id)a0;
- (id)initWithURL:(id)a0 groupType:(long long)a1;
- (BOOL)isImageAvailable;

@end
