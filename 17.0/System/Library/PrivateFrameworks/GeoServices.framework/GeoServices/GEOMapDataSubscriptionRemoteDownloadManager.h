@class NSString, NSMapTable, GEOXPCConnection, NSObject, geo_isolater;
@protocol OS_dispatch_queue, GEOMapDataSubscriptionDownloadManagerDelegate;

@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject <GEOMapDataSubscriptionDownloadManager> {
    int _geodLaunchedNotifyToken;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _configuredConnection;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    GEOXPCConnection *_connection;
    geo_isolater *_statesLock;
    NSMapTable *_states;
}

@property (weak, nonatomic) id<GEOMapDataSubscriptionDownloadManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (id)init;
- (void)_handleEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_receivedStateUpdate:(id)a0;
- (void)_reconnectIfNecessary;
- (void)_startObservingStateForIdentifier:(id)a0;
- (void)_stopObservingStateForIdentifier:(id)a0;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)a0 dataTypes:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)a0 mode:(unsigned long long)a1;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0 mode:(unsigned long long)a1;

@end
