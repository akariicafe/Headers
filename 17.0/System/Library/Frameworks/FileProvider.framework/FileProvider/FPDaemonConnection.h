@class NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, FPDDaemon;

@interface FPDaemonConnection : NSObject {
    NSXPCConnection<FPDDaemon> *_connectionQueueConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_getAttributeConnections;
    NSObject<OS_dispatch_source> *_getAttributeConnectionsIdleCleanupTimer;
}

@property (class, retain) NSString *disallowedConnectionReason;

@property (readonly, nonatomic) NSXPCConnection<FPDDaemon> *connection;
@property (nonatomic) unsigned int user;

+ (id)connectionForUser:(unsigned int)a0;
+ (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
+ (id)sharedConnectionProxy;
+ (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
+ (id)synchronousSharedConnectionProxy;
+ (id)newXPCConnection;
+ (id)sharedConnection;

- (void)extendSandboxForFileURL:(id)a0 fromProviderID:(id)a1 toConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForStabilizationOfDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)pinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)bookmarkableStringFromDocumentURL:(id)a0 error:(id *)a1;
- (void)fetchDomainServicerForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (void)detachItemWithID:(id)a0 relocatingAtURL:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1 providerFilter:(id)a2 completionHandler:(id /* block */)a3;
- (id)evictItemAtURL:(id)a0 evenIfEnumeratingFP:(BOOL)a1 andClearACLForConsumer:(id)a2 completionHandler:(id /* block */)a3;
- (void)wakeUpForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)bookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_retrieveItemWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 options:(unsigned long long)a2 reason:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)copyDatabaseForFPCKStartingAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)calculateNonPurgeableSpaceUsageOfDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)getURLForContainerWithItemID:(id)a0 inDataScopeDomainWithIdentifier:(id)a1 documentsScopeDomainIdentifier:(id)a2 documentsFolderItemIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithUser:(unsigned int)a0;
- (void)startProvidingItemAtURL:(id)a0 fromProviderID:(id)a1 forConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)makeTopologicallySortedItemsOnDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)detachItemWithID:(id)a0 relocatingAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)makeTopologicallySortedItemsOnDisk:(id)a0 error:(id *)a1;
- (id)listOfMonitoredAppsWithError:(id *)a0;
- (void)attachItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachKnownFolders:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)stateForDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_setDocIDResolutionPolicy:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchAndStartEnumeratingWithSettings:(id)a0 observer:(id)a1 completionHandler:(id /* block */)a2;
- (id)valuesForAttributes:(id)a0 forItemAtURL:(id)a1 error:(id *)a2;
- (void)providerDomainsCompletionHandler:(id /* block */)a0;
- (void)importDetachedFolder:(id)a0 parentID:(id)a1 logicalName:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)documentURLFromBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpDatabaseAt:(id)a0 fullDump:(BOOL)a1 writeTo:(id)a2 completionHandler:(id /* block */)a3;
- (void)providersCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 url:(id)a2 options:(unsigned long long)a3 reason:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (void)unpinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)extendBookmarkForFileURL:(id)a0 toConsumerID:(id)a1 completionHandler:(id /* block */)a2;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 url:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)restoreUserURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceIngestionForItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)documentURLFromBookmarkableString:(id)a0 error:(id *)a1;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)a0 fromProviderID:(id)a1 toConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPersonaForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)nonErrorCheckingConnection;
- (void)resolveConflictAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)backUpUserURL:(id)a0 outputUserURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)detachKnownFolders:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachItemWithID:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)connectionProxy;
- (void)updateLastUsedDateForFileURL:(id)a0 completionHandler:(id /* block */)a1;

@end
