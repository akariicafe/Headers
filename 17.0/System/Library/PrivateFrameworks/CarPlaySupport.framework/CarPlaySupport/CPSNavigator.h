@class CARNavigationOwnershipManager, CARSession, NSHashTable, NSString, CPTrip;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging, BSInvalidatable>

@property (nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) NSHashTable *displayDelegates;
@property (retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager;
@property (retain, nonatomic) CARSession *currentSession;
@property (retain, nonatomic) CPTrip *trip;
@property (weak, nonatomic) id<CARNavigationOwnershipManagerDelegate> navigationOwnershipDelegate;
@property (nonatomic) BOOL appSupportsInstrumentCluster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)a0;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)a0 description:(id)a1 turnCardColor:(id)a2;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)updateTravelEstimates:(id)a0 forManeuver:(id)a1;
- (void)updateTripTravelEstimates:(id)a0;
- (void)addDisplayDelegate:(id)a0;
- (id)initWithIdentifier:(id)a0 currentSession:(id)a1;
- (void)removeDisplayDelegate:(id)a0;

@end
