@class NSString, GEOXPCConnection;

@interface GEOOfflineRemoteDataAccess : NSObject <GEOOfflineDataAccessor> {
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _createdConnection;
    GEOXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (void)_ensureConnection;
- (void)getAvailableKeysForLayer:(unsigned int)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)hasDataForKey:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
- (BOOL)hasDataForKey:(id)a0 error:(id *)a1;
- (id)offlineTileMetadataWithError:(id *)a0;

@end
