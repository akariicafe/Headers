@class NSString, TULocked, NSObject;
@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>

@property (class, readonly, nonatomic) TUIDSLookupManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUIDSIDQueryController> queryController;
@property (readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses;
@property (readonly, nonatomic) TULocked *idsVideoMessagingStatuses;
@property (readonly, nonatomic) TULocked *idsiMessageStatuses;
@property (readonly, nonatomic) TULocked *idsModernStatuses;
@property (readonly, nonatomic) TULocked *idsWebCapableStatuses;
@property (readonly, nonatomic) TULocked *idsAVLessSharePlayCapableStatuses;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoMessagingController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchiMessageController;
@property (copy, nonatomic) id /* block */ batchQueryControllerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)fzHandleIDStatusForDestination:(id)a0 usingCache:(id)a1;
+ (BOOL)isAnyDestinationAvailableInDestinations:(id)a0 usingCache:(id)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)beginBatchQueryWithDestinations:(id)a0;
- (void)beginBatchQueryWithDestinations:(id)a0 includeMessages:(BOOL)a1;
- (void)beginCachedQueryWithDestinations:(id)a0;
- (void)beginCachedQueryWithDestinations:(id)a0 includeMessages:(BOOL)a1;
- (void)beginCachedQueryWithDestinations:(id)a0 onService:(id)a1;
- (void)beginQueryWithDestination:(id)a0 onService:(id)a1;
- (void)beginQueryWithDestinations:(id)a0;
- (void)beginQueryWithDestinations:(id)a0 includeMessages:(BOOL)a1;
- (void)cancelQueries;
- (unsigned int)faceTimeAudioAvailabilityForDestination:(id)a0;
- (unsigned int)faceTimeMultiwayAvailabilityForDestination:(id)a0;
- (unsigned int)faceTimeVideoAvailabilityForDestination:(id)a0;
- (void)filteredDestinationForMultiway:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleIDSQueryResultWithDestinationStatus:(id)a0 onService:(id)a1;
- (id)initWithQueryController:(id)a0;
- (BOOL)isAVLessSharePlayCapableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForItem:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeMultiwayAvailableForItem:(id)a0;
- (BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isFaceTimeVideoAvailableForItem:(id)a0;
- (BOOL)isModernFaceTimeAvailableForDestination:(id)a0;
- (BOOL)isVideoMessagingAvailableForAnyDestinationInDestinations:(id)a0;
- (BOOL)isVideoMessagingAvailableForItem:(id)a0;
- (BOOL)isWebCapableFaceTimeAvailableForDestination:(id)a0;
- (BOOL)isiMessageAvailableForAnyDestinationInDestinations:(id)a0;
- (void)postStatusChangedNotification;
- (void)queryHasEndpointWithCapabilities:(id)a0 forMultiwayDestinations:(id)a1 completionBlock:(id /* block */)a2;
- (void)queryHasWebOnlyEndpointsForDestinations:(id)a0 completionBlock:(id /* block */)a1;

@end
