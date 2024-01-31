@class MPServerObjectDatabase, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataImportWindow : NSObject {
    NSMutableArray *_accumulatedObjects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) double eventCadence;
@property (readonly, nonatomic) double maximumLatency;
@property (readonly, weak, nonatomic) MPServerObjectDatabase *serverObjectDatabase;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_purge;
- (id)initWithEventCadence:(double)a0 maximumLatency:(double)a1 serverObjectDatabase:(id)a2 queue:(id)a3;
- (void)_checkCadence;
- (void)addPayload:(id)a0 userIdentity:(id)a1;

@end
