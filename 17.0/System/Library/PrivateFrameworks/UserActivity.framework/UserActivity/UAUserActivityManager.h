@class NSMutableSet, NSUUID, NSMapTable, NSSet, NSXPCConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSXPCConnection *_connection;
    BOOL _connectionInitializationSucceeded;
    BOOL _activityContinuationIsEnabled;
    BOOL _allowedToConnect;
    NSMutableSet *_userActivityUUIDsSendToServer;
    int _useractivitydpid;
}

@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (copy) NSUUID *activeUserActivityUUID;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;
@property BOOL needToSendInitialMessage;
@property BOOL registeredForAppResignationMessages;
@property (readonly) NSXPCConnection *connection;
@property BOOL allowedToConnect;
@property (readonly) BOOL supportsActivityContinuation;
@property (readonly) BOOL activityContinuationIsEnabled;
@property (readonly, copy) NSObject<OS_dispatch_queue> *serialQueueForSendingActivitiesToServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)a0 dynamicType:(id)a1 kind:(unsigned long long)a2 teamIdentifier:(id)a3;
+ (BOOL)userActivityContinuationSupported;
+ (id)defaultManager;
+ (BOOL)shouldSupportActivityContinuation;

- (void)connectionInterrupted;
- (void)makeActive:(id)a0;
- (void)tellClientDebuggingEnabled:(BOOL)a0 logFileHandle:(id)a1;
- (id)init;
- (void)addUserActivity:(id)a0;
- (void)tellDaemonAboutNewLSUserActivity:(id)a0;
- (id)activities;
- (BOOL)currentUserActivityUUIDWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)encodeUserActivity:(id)a0;
- (void)dealloc;
- (BOOL)currentUserActivityProxiesWithOptions:(id)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasUserActivityWithUUID:(id)a0;
- (void)sendCurrentActivityToIndexer:(id)a0;
- (id)userActivityForUUID:(id)a0;
- (void)unregisterForApplicationDeactivation;
- (BOOL)userActivityIsActive:(id)a0;
- (void)connectionInvalidated;
- (void)sendToIndexerIfAppropriate:(id)a0 force:(BOOL)a1;
- (void)markUserActivityAsDirty:(id)a0 forceImmediate:(BOOL)a1;
- (id)initWithConnection:(id)a0;
- (void)askClientUserActivityToSave:(id)a0;
- (void)pinUserActivity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)tellClientUserActivityItWasResumed:(id)a0;
- (id)fetchUUID:(id)a0 intervalToWaitForDocumentSynchonization:(double)a1 withCompletionHandler:(id /* block */)a2;
- (void)makeInactive:(id)a0;
- (BOOL)determineIfUserActivityIsCurrent:(id)a0 completionHandler:(id /* block */)a1;
- (id)activeActivitiesByPriority;
- (void).cxx_destruct;
- (void)removeUserActivity:(id)a0;
- (BOOL)initialServerHandshake:(BOOL)a0;
- (void)askClientUserActivityToSave:(id)a0 completionHandler:(id /* block */)a1;
- (void)didReceiveInputStreamWithUUID:(id)a0 inputStream:(id)a1 outputStream:(id)a2;
- (void)sendUserActivityInfoToLSUserActivityd:(id)a0 makeCurrent:(BOOL)a1;
- (void)registerForApplicationDeactivateIfNecessary;
- (void)removeDynamicUserActivity:(id)a0 matching:(id)a1;
- (id)createByDecodingUserActivity:(id)a0;
- (BOOL)registerAsProxyForApplication:(int)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void)addDynamicUserActivity:(id)a0 matching:(id)a1;

@end
