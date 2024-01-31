@class NSEnumerator, NSString, NSArray, HMFTimer, HMDResidentDevice, HMFFuture, NSUUID, NSError, HMDMessageDispatcher, HMDHome;

@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryOperation>

@property (weak) HMDHome *home;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) id /* block */ responseHandler;
@property (retain) NSEnumerator *candidateDestinationsEnumerator;
@property (readonly) NSArray *candidateDestinations;
@property (retain) HMFTimer *sendToNextDestinationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMFFuture *completionFuture;
@property (readonly) HMDResidentDevice *currentPrimaryResident;
@property (readonly) NSUUID *currentPrimaryResidentGenerationID;
@property (readonly) NSError *error;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)run;
- (void)finish;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)a0;
- (id)initWithHome:(id)a0 messageDispatcher:(id)a1;

@end
