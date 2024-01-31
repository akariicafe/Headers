@class PFUbiquityLocation, NSString, NSURL, NSSet, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)logWasImported:(id)a0;
- (void)logWasExported:(id)a0;
- (void)exporterDidMoveLog:(id)a0;
- (id)initWithUbiquityRootLocation:(id)a0 localPeerID:(id)a1 storeName:(id)a2 processingQueue:(id)a3;
- (void)logImportWasCancelled:(id)a0;
- (void)logsWereScheduled:(id)a0;
- (void)printStatus:(id)a0;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)a0;

@end
