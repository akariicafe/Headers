@class MRNowPlayingPlayerResponse, MRNowPlayingControllerConfiguration, MRDestination, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue, MRNowPlayingControllerImpl, MRNowPlayingControllerDelegate;

@interface MRNowPlayingController : NSObject

@property (retain, nonatomic) id<MRNowPlayingControllerImpl> impl;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSDate *allocationDate;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *lastInitialLoadDate;
@property (retain, nonatomic) NSDate *lastInvalidationDate;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (weak, nonatomic) id<MRNowPlayingControllerDelegate> delegate;
@property (readonly, copy, nonatomic) MRDestination *destination;

+ (id)proactiveEndpointController;
+ (void)performRequest:(id)a0 withCompletion:(id /* block */)a1;
+ (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 options:(id)a2 appOptions:(unsigned int)a3 withCompletion:(id /* block */)a4;
+ (id)localRouteController;
+ (id)userSelectedEndpointController;

- (id)playerPath;
- (id)initWithUID:(id)a0;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)a0;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 completion:(id /* block */)a3;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)a0;
- (void)dealloc;
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)a0;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)a0;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)a0;
- (void)beginLoadingUpdates;
- (void)_notifyDelegateOfError:(id)a0;
- (id)_createImplWithConfiguration:(id)a0;
- (id)description;
- (void)endLoadingUpdates;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)_notifyDelegateOfPlayerPathChange:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)a0;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)a0;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void)_notifyDelegateOfInvalidation;
- (id)_makeHelper;
- (void)_notifyDelegateOfUpdate;
- (id)initWithDestination:(id)a0;

@end
