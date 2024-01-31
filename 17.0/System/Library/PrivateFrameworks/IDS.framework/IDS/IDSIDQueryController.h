@class IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {
    _IDSIDQueryController *_internal;
    IDSInternalQueueController *_queueController;
}

+ (id)sharedInstance;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)init;
- (void)dealloc;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 infoTypes:(unsigned long long)a2 options:(id)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (void)removeDelegate:(id)a0;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlockWithError:(id /* block */)a4;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 errorCompletionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_hasCacheForService:(id)a0;
- (BOOL)_warmupQueryCacheForService:(id)a0;

@end
