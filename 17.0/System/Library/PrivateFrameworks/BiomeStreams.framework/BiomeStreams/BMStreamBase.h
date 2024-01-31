@class NSString, BMStoreStream, BMStreamConfiguration, BMSQLSchema;

@interface BMStreamBase : NSObject <BMSyncableStream, BMSharedSyncableStream> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) BMStoreStream *storeStream;
@property (readonly, nonatomic) BMStreamConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMSQLSchema *schema;

- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)pruner;
- (id)accountsWithError:(id *)a0;
- (id)DSLPublisher;
- (id)publisher;
- (id)DSLPublisherWithUseCase:(id)a0;
- (id)publisherWithUseCase:(id)a0;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 schema:(id)a1 configuration:(id)a2;
- (id)publishersForAccounts:(id)a0 deviceTypes:(unsigned int)a1 withUseCase:(id)a2 startTime:(id)a3 endTime:(id)a4 maxEvents:(id)a5 lastN:(id)a6 reversed:(BOOL)a7 includeLocal:(BOOL)a8 pipeline:(id /* block */)a9;
- (id)storeStreamForUseCase:(id)a0;
- (id)publishersForDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)description;
- (void).cxx_destruct;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(id)a2 endTime:(id)a3 maxEvents:(id)a4 lastN:(id)a5 reversed:(BOOL)a6 includeLocal:(BOOL)a7 pipeline:(id /* block */)a8;
- (id)source;
- (id)publisherWithOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(double)a2 includeLocal:(BOOL)a3 pipeline:(id /* block */)a4;
- (id)remoteDevicesWithError:(id *)a0;

@end
