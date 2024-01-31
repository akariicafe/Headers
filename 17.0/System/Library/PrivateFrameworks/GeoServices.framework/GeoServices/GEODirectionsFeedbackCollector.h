@class NSString, NSArray, GEODirectionsFeedbackLogMessage, NSMutableArray, GEOLatLng, GEOLocation, GEODirectionsFeedback, NSNumber;

@interface GEODirectionsFeedbackCollector : NSObject {
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
    double _originalExpectedTime;
    GEOLatLng *_tripOrigin;
    BOOL _wasEverConnectedToCarplay;
    BOOL _hasEnteredPreArrivalMode;
    NSNumber *_isVLFImprovementUsed;
    NSNumber *_arWalkingUsedInRoutePlanning;
    NSNumber *_arWalkingUsedInNavigation;
    BOOL _chargingStopAdded;
    BOOL _isCoarseLocationUsed;
    int _voiceGuidanceLevel;
    int _transportType;
    NSNumber *_isHandsFreeProfileUsed;
}

@property (retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage;
@property (retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;
@property (readonly, nonatomic) BOOL hasActiveFeedbackSession;
@property (nonatomic) BOOL isEVRoute;
@property (nonatomic) BOOL batteryDied;
@property (nonatomic) BOOL isBadEvExperience;
@property (retain, nonatomic) NSNumber *stateOfChargeAtOrigin;
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestPredicted;
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestActual;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) NSString *evConsumptionModel;
@property (retain, nonatomic) NSString *evChargingModel;
@property (nonatomic) double timeBetweenParkedAndArrival;
@property (nonatomic) unsigned long long arrivedAtDestinationCount;
@property (nonatomic) unsigned long long inParkingModeCount;
@property (nonatomic) BOOL enteredParkingMode;
@property (nonatomic) BOOL didSuggestWalkingRoute;
@property (nonatomic) BOOL userDidAcceptWalkingRoute;
@property (nonatomic) BOOL didSuggestFindMy;
@property (nonatomic) BOOL userDidLaunchFindMy;
@property (nonatomic) long long endReason;
@property (retain, nonatomic) GEOLocation *parkingDetectionLocation;
@property (retain, nonatomic) GEOLocation *arrivalLocation;

- (void)setTransportType:(int)a0;
- (id)init;
- (void)addAlightNotificationFeedback:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)setARWalkingUsedInRoutePlanning:(BOOL)a0;
- (void)setTripOrigin:(id)a0;
- (void)setModalities:(id)a0;
- (void)setIsVLFImprovementUsed:(BOOL)a0;
- (void)startFeedbackSessionForResponseID:(id)a0 withNavigationType:(int)a1;
- (id)description;
- (void)setIsHandsFreeProfileUsed:(BOOL)a0;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback { BOOL x0; BOOL x1; BOOL x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; BOOL x12; unsigned int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x18; } *)a0;
- (void)setFinalLocation:(id)a0 asArrival:(BOOL)a1;
- (void)setHasEnteredPreArrivalMode:(BOOL)a0;
- (void)addTrafficRerouteFeedback:(id)a0;
- (void)setARWalkingUsedInNavigation:(BOOL)a0;
- (void)changeNavigationType:(int)a0;
- (void).cxx_destruct;
- (BOOL)_canSampleBadEvTrip;
- (void)setWasEverConnectedToCarplay:(BOOL)a0;
- (void)setVoiceGuidanceLevel:(int)a0;
- (void)addGuidanceEventFeedback:(id)a0;
- (void)setChargingStopAdded:(BOOL)a0;
- (void)setOriginalExpectedTime:(double)a0;
- (void)setupFeedbackSessionWithResponseID:(id)a0;
- (void)setIsCoarseLocationUsed:(BOOL)a0;
- (void)addRouteID:(id)a0 routeIndex:(unsigned int)a1 stepID:(unsigned int)a2 completeStep:(BOOL)a3;
- (void)addStepFeedback:(id)a0;
- (void)endFeedbackSessionWithTracePath:(id)a0;
- (void)_updateFeedbackSessionWithResponseID:(id)a0;

@end
