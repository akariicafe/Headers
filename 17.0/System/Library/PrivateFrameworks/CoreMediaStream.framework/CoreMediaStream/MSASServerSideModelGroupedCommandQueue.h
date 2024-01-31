@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue

@property (retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand;

+ (id /* block */)calloutBlockForCommand:(id)a0;

- (void)MSASModel:(id)a0 didFindDeletedAssetCollection:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)MSASModel:(id)a0 didFindDeletedAlbum:(id)a1 info:(id)a2;
- (void)MSASModel:(id)a0 didFindNewAssetCollection:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)flushQueue;
- (void)workQueueEnqueueCommand:(id)a0 variantParam:(id)a1 invariantParam:(id)a2;
- (void)MSASModel:(id)a0 didFindDeletedInvitation:(id)a1 info:(id)a2;
- (void).cxx_destruct;
- (void)MSASModel:(id)a0 didFindNewAccessControl:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)MSASModel:(id)a0 didFindDeletedAccessControl:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)MSASModel:(id)a0 didFindNewComment:(id)a1 forAssetCollection:(id)a2 inAlbum:(id)a3 info:(id)a4;
- (void)MSASModel:(id)a0 didFindNewAlbum:(id)a1 info:(id)a2;
- (void)MSASModel:(id)a0 didDeleteComment:(id)a1 forAssetCollection:(id)a2 inAlbum:(id)a3 info:(id)a4;
- (BOOL)hasEnqueuedItems;
- (void)workQueueFlushQueue;
- (void)MSASModel:(id)a0 didFindNewInvitation:(id)a1 info:(id)a2;

@end
