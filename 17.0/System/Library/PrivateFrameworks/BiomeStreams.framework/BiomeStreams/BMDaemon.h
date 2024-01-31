@class BMComputeXPCPublisherClient, NSString, BMComputeXPCPublisherStorage, NSMutableDictionary, BMDSLGraphValidator, BMComputeSourceServer, NSObject, BMComputeXPCPublisherServer;
@protocol OS_dispatch_queue, BMViewEventReporter;

@interface BMDaemon : NSObject <BMComputeXPCPublisherServerDelegate, BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BOOL isAgent;
@property (class, readonly) BOOL isAgentOrEmbedded;
@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMComputeXPCPublisherStorage *systemBookmarkStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *userBookmarkStorage;
@property (retain, nonatomic) NSMutableDictionary *activeSystemSubscriptionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *subscribedSystemStreams;
@property (retain, nonatomic) BMComputeXPCPublisherClient *systemStreamsPublisherClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *userSourceServer;
@property (readonly, nonatomic) BMComputeSourceServer *systemSourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *userPublisherServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *systemPublisherServer;
@property (readonly, nonatomic) id<BMViewEventReporter> eventReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0 activity:(id)a1;
+ (void)registerXPCActivities;
+ (id)userComputePublisherStreamName;
+ (id)new;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2 activity:(id)a3;
+ (void)donateLaunchEvents;
+ (void)pruneAppInFocusPosterBoardEvents;
+ (id)systemComputePublisherStreamName;
+ (BOOL)atLeastOneSegmentFileInDirectory:(id)a0 fileManager:(id)a1;
+ (id)userComputeSourceServiceName;
+ (void)pruneFeatureStoreWithActivity:(id)a0;
+ (id)BiomeAgentLaunchNotification;
+ (id)systemComputeSourceServiceName;
+ (id)userComputePublisherServiceName;
+ (id)systemComputePublisherServiceName;
+ (void)pruneTemporaryFilesInDirectory:(id)a0;
+ (void)prunePublicStreamsWithActivity:(id)a0;
+ (void)pruneEmptyRemoteStreams:(id)a0;
+ (id)loadDKStreamNameToTTL;
+ (void)pruneRestrictedStreamsWithActivity:(id)a0;
+ (void)pruneTemporaryFiles;
+ (void)_donateDeviceMetadata;
+ (id)biomedLaunchNotification;

- (id)init;
- (void)publisherServer:(id)a0 didAddSubscription:(id)a1;
- (id)_publisherServer;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;
- (void)_subscribeStreamsForViews;
- (void)setUpNotificationHandler;
- (void)publisherServer:(id)a0 didRemoveSubscription:(id)a1;
- (void)eventsPrunedWithStreamIdentifier:(id)a0 reason:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 eventReporter:(id)a1;
- (id)_bookmarkStorage;
- (void)_subscribeSystemStream:(id)a0 subscriptionIdentifier:(id)a1 useCase:(id)a2;

@end
