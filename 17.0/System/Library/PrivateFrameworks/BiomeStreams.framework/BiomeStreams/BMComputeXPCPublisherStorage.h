@class BMFileManager;

@interface BMComputeXPCPublisherStorage : NSObject {
    BMFileManager *_fileManager;
}

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) BOOL isClient;

+ (id)bookmarkStorageForCurrentProcess;

- (id)currentSession;
- (void).cxx_destruct;
- (id)basePath;
- (id)currentSessionSubscriptionsPath;
- (id)bookmarkPathForSessionStorageWithIdentifier:(id)a0 client:(id)a1;
- (BOOL)checkActiveSubscriptionMarkerForStream:(id)a0;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)currentSessionBookmarkClientOrServerPath;
- (id)currentSessionBookmarkPath;
- (id)currentSessionNonwakingSubscriptionPath;
- (id)currentSessionPath;
- (id)initWithUseCase:(id)a0 domain:(unsigned long long)a1 isClient:(BOOL)a2;
- (void)initializeBiomeDSLDirectoryForBootSession;
- (id)newFileManagerWithUseCase:(id)a0;
- (id)persistentPath;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (id)readNonWakingSubscriptions:(id *)a0;
- (id)readNonwakingSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (void)removeActiveSubscriptionMarkerForStream:(id)a0;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (void)removeNonWakingSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)sessionsPath;
- (id)subscriptionMarkerPathForSessionStorageWithStream:(id)a0;
- (void)writeActiveSubscriptionMarkerForStream:(id)a0;
- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1 client:(id)a2;
- (void)writeNonWakingSubscription:(id)a0;

@end
