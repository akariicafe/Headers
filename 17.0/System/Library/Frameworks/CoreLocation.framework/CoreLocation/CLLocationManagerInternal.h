@class CLTimer, NSString, CLSilo, NSData, NSMutableSet, CLLocationManager, CLLocationManagerStateTracker;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject {
    struct __CLClient { } *fClient;
    CLLocationManagerStateTracker *fState;
    struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; double ellipsoidalAltitude; BOOL fromSimulationController; } fLocation;
    NSString *fLocationEventType;
    CLTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    CLTimer *fRangingRequestTimer;
    double fLastRangingRequestTimeout;
    unsigned long long fLastRangingRequestMachTime;
    int fHeadingOrientation;
    id /* block */ fPlaceInferenceHandler;
    unsigned long long fFidelityPolicy;
    CLTimer *fPlaceInferenceTimer;
    BOOL fIsMasquerading;
    NSMutableSet *fIdentifiableClients;
    CLSilo *fSilo;
}

@property (retain) NSString *clientKeyForIdentityValidation;
@property (retain) NSData *monitorLedgerAccessKey;
@property (readonly, nonatomic) NSMutableSet *rangedRegions;
@property (readonly, nonatomic) NSMutableSet *rangedConstraints;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (weak, nonatomic) CLLocationManager *manager;

- (BOOL)showsBackgroundLocationIndicator;
- (void)dealloc;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)a0;
- (void)invalidate;
- (BOOL)allowsBackgroundLocationUpdates;
- (BOOL)hasLingeringRangingRequest;
- (void)cancelLocationRequest;
- (void)performCourtesyPromptIfNeeded;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 bundleIdentifier:(id)a1 bundlePath:(id)a2 websiteIdentifier:(id)a3 delegate:(id)a4 silo:(id)a5;
- (void)setShowsBackgroundLocationIndicator:(BOOL)a0;
- (void)setPausesLocationUpdatesAutomatically:(int)a0;
- (int)PausesLocationUpdatesAutomatically;
- (void)cancelRangingRequest;
- (void)cancelLingeringRangingRequest;
- (void)stopUpdatingLocationAutoPaused;

@end
