@class NSString, NSURL, NSArray, GEOApplicationAuditToken, NSMutableArray, NSProgress, NSObject, NSMapTable, GEOReportedProgress;
@protocol OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoader : NSObject <NSProgressReporting> {
    NSString *_directory;
    NSString *_additionalDirectoryToConsider;
    NSMutableArray *_resourcesToLoad;
    id /* block */ _completionHandler;
    unsigned long long _numberOfDownloadsInProgress;
    long long _numberOfCopiesInProgress;
    BOOL _canceled;
    NSURL *_baseURL;
    NSArray *_alternateURLs;
    NSURL *_proxyURL;
    BOOL _forceUpdateCheck;
    unsigned long long _maxConcurrentLoads;
    NSArray *_resourceInfos;
    NSMutableArray *_loadedResources;
    GEOApplicationAuditToken *_auditToken;
    NSMapTable *_inProgressResourceDownloads;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURL *_authProxyURL;
    NSObject<OS_os_log> *_log;
    unsigned long long _signpostID;
}

@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)resourceLoadOperationClass;

- (void)_cleanup;
- (id)init;
- (void)_loadResourcesFromDisk;
- (void)_loadNextResourceFromNetwork;
- (id)initWithTargetDirectory:(id)a0 auditToken:(id)a1 baseURL:(id)a2 alternateURLs:(id)a3 proxyURL:(id)a4 resources:(id)a5 forceUpdateCheck:(BOOL)a6 maximumConcurrentLoads:(unsigned long long)a7 additionalDirectoryToConsider:(id)a8 log:(id)a9 signpostID:(unsigned long long)a10;
- (BOOL)_copyResource:(id)a0 fromPath:(id)a1 allowCreatingHardLink:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (BOOL)_establishHardLinkIfPossibleForResource:(id)a0 toResource:(id)a1 error:(id *)a2;
- (void)cancel;
- (void)_writeResourceToDisk:(id)a0 withData:(id)a1 orTempFile:(id)a2 checksum:(id)a3 eTag:(id)a4 completionHandler:(id /* block */)a5 callbackQueue:(id)a6;

@end
