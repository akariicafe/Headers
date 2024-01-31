@class NSMapTable, NSMutableDictionary, NTKFaceSnapshotCacheRequest, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *snapshots;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (readonly, nonatomic) NSMutableDictionary *requestsBySnapshotKey;
@property (readonly, nonatomic) NSMapTable *callCountsByFace;
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *servicingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *highPriorityRequests;
@property (retain, nonatomic) NSMutableOrderedSet *lowPriorityRequests;

+ (id)snapshotCache;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_attemptSnapshotForRequest:(id)a0;
- (void)_invokeCallbacksMatchingRequest:(id)a0 withSnapshot:(id)a1;
- (void)_serviceRequestsIfIdle;
- (void)_snapshotProcessInterrupted:(id)a0;
- (id)cachedSnapshotOfFace:(id)a0;
- (void)cancelSnapshotRequest:(id)a0;
- (void)fetchSnapshotWithRequest:(id)a0;

@end
