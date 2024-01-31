@class NSSet, NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SpotlightReceiverConnection : CSXPCConnection {
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
    _Atomic BOOL _disabled;
}

@property (readonly, nonatomic) NSSet *bundleIDs;
@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) NSSet *INIntentClassNames;
@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue;
@property (readonly, nonatomic) _Atomic unsigned int requestCount;
@property (nonatomic) BOOL wantsHTML;
@property (nonatomic) BOOL wantsText;
@property (nonatomic) BOOL setupStarted;
@property (nonatomic) BOOL setupComplete;
@property (nonatomic) BOOL skipFileProviderItems;
@property (nonatomic) double minDate;
@property (readonly, nonatomic) BOOL unresponsive;
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore;

+ (void)setup;

- (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (BOOL)disabled;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 retainedData:(id)a2;
- (void)startSetup;
- (void)setupComplete:(BOOL)a0;
- (void)disableReceiver;
- (void)deleteAllUserActivities:(id)a0;
- (BOOL)_wantsContentType:(id)a0;
- (void)dictionary:(id)a0 setDecoderData:(id)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
- (void)deleteFromBundle:(id)a0 contentType:(id)a1 identifiers:(id)a2;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (void)handleError:(id)a0;
- (void)deleteFromBundle:(id)a0;
- (void)deleteFromBundle:(id)a0 sinceDate:(id)a1;
- (BOOL)_wantsBundleID:(id)a0;
- (void)deleteFromBundle:(id)a0 domainIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (BOOL)canRun;
- (void)deleteFromBundle:(id)a0 encodedIdentifiers:(id)a1;
- (void)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)runOnSenderQueue:(id /* block */)a0;
- (void)receiverRequestStart;
- (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3;
- (void)receiverRequestComplete;
- (void)enableReceiver;
- (id)initWithServiceName:(id)a0 clientID:(long long)a1 wantsText:(BOOL)a2 wantsHTML:(BOOL)a3;
- (void)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;

@end
