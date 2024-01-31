@class NSURLSession, NSMutableDictionary, NSString, NSMapTable, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
    NSObject<OS_dispatch_queue> *_managerQueue;
}

@property (retain) NSCache *iconCache;
@property (retain) NSMutableDictionary *outstandingRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedImageManager;
+ (id)defaultAppIconTableUI;
+ (id)defaultDeviceIconTableUIForSource:(id)a0;
+ (id)defaultAppIcon;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)clearImageCache;
- (void)loadAppImageAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)iconForSource:(id)a0;
- (id)iconForDevice:(id)a0;
- (void)loadIconForSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconForSource:(id)a0 syncHandler:(id /* block */)a1 asyncHandler:(id /* block */)a2;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)a0 appImage:(id)a1;
- (void)_enqueueRequestForAppIconForIdentifier:(id)a0;
- (void)_queue_cacheAppIcon:(id)a0 forIdentifier:(id)a1;
- (id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)a0;
- (void)_queue_loadAppIconForSource:(id)a0 onCompletion:(id /* block */)a1;
- (id)_queue_researchStudyIconForSource:(id)a0;
- (id)_queue_synchronousLoadIconForSource:(id)a0;
- (void)cacheAppIcon:(id)a0 forIdentifier:(id)a1;
- (void)loadAppImageAtURL:(id)a0 crop:(long long)a1 completionHandler:(id /* block */)a2;
- (id)researchStudyIconForSource:(id)a0;

@end
