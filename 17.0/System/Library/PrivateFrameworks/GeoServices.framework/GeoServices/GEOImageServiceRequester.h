@class geo_isolater, NSMapTable, NSHashTable;

@interface GEOImageServiceRequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
    NSMapTable *_requestToIdentifier;
}

+ (id)sharedRequester;

- (id)init;
- (unsigned long long)calculateFreeableSize;
- (BOOL)_finishRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelImageServiceRequest:(id)a0;
- (unsigned long long)shrinkDiskCacheToSize:(unsigned long long)a0;
- (void)startImageServiceRequest:(id)a0 auditToken:(id)a1 throttleToken:(id)a2 queue:(id)a3 finished:(id /* block */)a4 networkActivity:(id /* block */)a5 error:(id /* block */)a6;

@end
