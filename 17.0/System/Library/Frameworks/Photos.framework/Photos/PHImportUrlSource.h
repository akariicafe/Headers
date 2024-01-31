@class NSArray, NSDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    NSMutableSet *_accessedURLs;
    NSString *_prefix;
}

@property (retain, nonatomic) NSArray *baseNames;
@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) BOOL isReadonlyVolume;
@property (retain, nonatomic) NSDictionary *resourcePathsByIdentifier;

+ (BOOL)treatAsReadonlyVolume:(id)a0;

- (void)setPrefix:(id)a0;
- (id)prefix;
- (unsigned long long)hash;
- (void)dealloc;
- (id)path;
- (void).cxx_destruct;
- (void)endWork;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAvailable;
- (id)assetsByProcessingItem:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (BOOL)canReference;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(id /* block */)a0;
- (id)initWithUrls:(id)a0;
- (BOOL)isEqualToImportUrlSource:(id)a0;
- (id)productKind;
- (id)resourcePathsInUrls:(id)a0;
- (id)rootUrlOfUrls:(id)a0;
- (id)volumePath;

@end
