@class GEOMapDataSubscription, NSString, NSDictionary, GEOPBOfflineDataBatchesResponse, NSError, NSObject, GEOOfflineDataKeysServiceRequester;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_group;

@interface GEOMapDataSubscriptionOfflineDataKeySelector : NSObject <GEOMapDataSubscriptionOfflineKeySelector> {
    GEOMapDataSubscription *_subscription;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    GEOOfflineDataKeysServiceRequester *_dataKeyRequester;
    unsigned long long _requestOptions;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _startedPreparing;
    NSObject<OS_dispatch_group> *_preparationGroup;
    GEOPBOfflineDataBatchesResponse *_keysToLoad;
    NSError *_keysLoadError;
    unsigned long long _layerIndex;
    unsigned long long _layerOffset;
}

@property (readonly, nonatomic) NSDictionary *layerVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
