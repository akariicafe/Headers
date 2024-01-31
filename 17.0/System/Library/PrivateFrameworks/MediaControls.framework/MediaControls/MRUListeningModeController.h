@class NSArray, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUListeningModeControllerDelegate;

@interface MRUListeningModeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUListeningModeControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *availablePrimaryListeningModes;
@property (readonly, nonatomic) NSString *primaryListeningMode;
@property (readonly, nonatomic) NSArray *availableSecondaryListeningModes;
@property (readonly, nonatomic) NSString *secondaryListeningMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePrimaryListeningMode;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)updateSecondaryListeningMode;
- (void).cxx_destruct;
- (id)listeningModeErrorMessageForOutputDevice:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)setListeningMode:(id)a0 forOutputDeviceRoute:(id)a1 previousListeningMode:(id)a2 completion:(id /* block */)a3;
- (void)setPrimaryListeningMode:(id)a0 completion:(id /* block */)a1;
- (id)sortedListeningModes:(id)a0;
- (void)setSecondaryListeningMode:(id)a0 completion:(id /* block */)a1;

@end
