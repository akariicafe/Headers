@class NSString, NSDictionary, PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchFilterLock;
    NSString *__fetchFilterLock_fetchFilterClientIdentifier;
    NSDictionary *__fetchFilterLock_fetchFilterEntityNameToPredicateMap;
    NSNumber *_fetchFilterLock_fetchFilterEnabledStatus;
    PLLimitedLibraryFetchFilter *__fetchFilterLock_fetchFilter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _crashLogMessageLock;
    char _crashLogMessageLock_crashLogMessage[2048];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restrictedAccessLock;
    NSNumber *_restrictedAccessLock_lockedContentAccessAllowed;
}

- (void)clearCrashLogMessage;
- (id)initWithConnectionAuthorization:(id)a0;
- (id)init;
- (void)dealloc;
- (void)limitedLibraryFetchFiltersUpdated:(id)a0;
- (id)allowableClassesForClientWithContext:(id)a0;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)processRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForRelationshipWithName:(id)a0 onObjectWithID:(id)a1 fromClientWithContext:(id)a2 error:(id *)a3;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (void).cxx_destruct;
- (void)setCrashLogMessageForRequest:(id)a0 context:(id)a1;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)_restrictedEntityNamesAllowedForContext:(id)a0;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)a0;
- (BOOL)_restrictedLockedContentAccessAllowedForContext:(id)a0;

@end
