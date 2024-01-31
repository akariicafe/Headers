@class NSURLSession, NSString, NSDictionary, NSURL, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {
    NSURL *_serverConfigurationURL;
    NSDictionary *_serverConfigurationDict;
    NSMutableDictionary *_userDefaultsCache;
    id /* block */ _configurationPlistDidUpdateBlock;
    NSOperationQueue *_downloadQueue;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<NSObject> _defaultsDidChangeNotificationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)reset;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)_reset;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initWithPersonaID:(id)a0;
- (void)_loadServerConfigurationDictionary;
- (void)_parsePlistWithURL:(id)a0;
- (void)_prepopulateGlobalUserDefaults;
- (void)_setServerConfigurationURL:(id)a0 whenLoaded:(id /* block */)a1;
- (id)defaultsForIdentifier:(id)a0;
- (void)loadCachedServerConfiguration;
- (void)setServerConfigurationURL:(id)a0 whenLoaded:(id /* block */)a1;

@end
