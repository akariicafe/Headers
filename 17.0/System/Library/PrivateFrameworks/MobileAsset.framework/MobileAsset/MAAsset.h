@class NSDictionary, NSString;

@interface MAAsset : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly) long long state;
@property (readonly, nonatomic) NSString *purpose;

+ (void)startCatalogDownload:(id)a0 then:(id /* block */)a1;
+ (void)startCatalogDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
+ (id)loadSync:(id)a0 withPurpose:(id)a1 error:(id *)a2;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 withPurpose:(id)a2 error:(id *)a3;
+ (void)cancelCatalogDownload:(id)a0 withPurpose:(id)a1 then:(id /* block */)a2;
+ (void)startCatalogDownload:(id)a0 options:(id)a1 completionWithError:(id /* block */)a2;
+ (id)loadSync:(id)a0 error:(id *)a1;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 error:(id *)a2;
+ (id)getLoadResultFromMessage:(id)a0;
+ (void)cancelCatalogDownload:(id)a0 then:(id /* block */)a1;

- (void)purge:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)spaceCheck:(long long *)a0;
- (id)initWithAttributes:(id)a0;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (id)description;
- (id)hashToString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)cancelDownload:(id /* block */)a0;
- (id)getLocalFileUrl;
- (void)attachProgressCallBack:(id /* block */)a0;
- (void)startDownload:(id)a0 then:(id /* block */)a1;
- (long long)purgeSync;
- (BOOL)refreshState;
- (BOOL)wasLocal;
- (BOOL)wasPurgeable;
- (void)startDownload:(id /* block */)a0;
- (id)getLocalUrl;
- (void)logAsset;
- (id)absoluteAssetId;
- (BOOL)wasDownloadable;
- (void)purgeWithError:(id /* block */)a0;
- (BOOL)wasPreinstalled;
- (void)_invokeClientDownloadCompletionAlreadyOnQueue:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (id)assetProperty:(id)a0;
- (id)assetServerUrl;
- (long long)calculateTimeout;
- (long long)cancelDownloadSync;
- (void)commonAssetDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
- (void)configDownload:(id)a0 completion:(id /* block */)a1;
- (long long)configDownloadSync:(id)a0;
- (id)getLocalFilePath;
- (void)invokeClientDownloadCompletion:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (BOOL)overrideGarbageCollectionThreshold:(unsigned long long)a0;
- (void)startDownload:(id)a0 completionWithError:(id /* block */)a1;
- (void)startDownloadWithExtractor:(id /* block */)a0 completion:(id /* block */)a1;
- (void)startDownloadWithExtractor:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadWithExtractor:(id /* block */)a0 options:(id)a1 completionWithError:(id /* block */)a2;
- (BOOL)wasInCatalog;

@end
