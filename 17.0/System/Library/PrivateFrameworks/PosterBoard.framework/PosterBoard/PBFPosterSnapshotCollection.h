@class NSString, NSMapTable;

@interface PBFPosterSnapshotCollection : NSObject <BSCancellable> {
    NSMapTable *_lock_definitionToCollection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithUniqueIdentifier:(id)a0;
- (BOOL)beginRequestForDefinition:(id)a0 displayContext:(id)a1 invalidationContext:(id)a2;
- (BOOL)completeRequestForDefinition:(id)a0 displayContext:(id)a1 receivedSnapshot:(id)a2 receivedError:(id)a3;
- (void)enumerateInProgressRequests:(id /* block */)a0;
- (void)failPreviewImageForDefinition:(id)a0 displayContext:(id)a1 error:(id)a2;
- (id)invalidateAndRemoveInProgressRequestsNotMatchingContext:(id)a0;
- (unsigned long long)numberOfTimesSnapshotHasFailedToHydrateForDefinition:(id)a0 displayContext:(id)a1;
- (id)receivedImageForDefinition:(id)a0 displayContext:(id)a1;
- (BOOL)shouldProceedFetchingSnapshotForDefinition:(id)a0 displayContext:(id)a1 maxNumberOfRetryAfterErrors:(unsigned long long)a2;
- (long long)snapshotRequestStatusForDefinition:(id)a0 displayContext:(id)a1 outInvalidationContext:(out id *)a2;

@end
