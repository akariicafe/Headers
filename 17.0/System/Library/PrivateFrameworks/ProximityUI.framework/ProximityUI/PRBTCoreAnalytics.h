@class NSUUID, NSString, CABTRunData, NSURLSession, AKAppleIDSession, CABTSessionData, NSDictionary, NSObject, PRBTProximityMeasurement, NSNumber;
@protocol OS_os_log;

@interface PRBTCoreAnalytics : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSUUID *sessionId;
@property (retain, nonatomic) NSUUID *runId;
@property (nonatomic) long long eventNumber;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) PRBTProximityMeasurement *latestProximityLevel;
@property (retain, nonatomic) NSNumber *btRssiEstimate;
@property (retain, nonatomic) NSNumber *traveledDistance;
@property (retain, nonatomic) NSNumber *numberOfPoses;
@property (retain, nonatomic) NSNumber *numberOfMeasurements;
@property (nonatomic) BOOL shouldLogProximityLevelFoundEvent;
@property (nonatomic) BOOL shouldLogMotionEvent;
@property (nonatomic) BOOL shouldLogEnteredArmsReachEvent;
@property (retain, nonatomic) AKAppleIDSession *authSession;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSString *authHeaderValue;
@property (retain, nonatomic) CABTSessionData *sessionData;
@property (retain, nonatomic) CABTRunData *runData;
@property (retain) NSDictionary *customData;

+ (BOOL)isInternalBuild;

- (void)resetState;
- (id)init;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)addLatestProximityLevel:(id)a0;
- (void)configureComplete:(int)a0;
- (void)configureSession:(BOOL)a0 withProductUUID:(id)a1;
- (void)deinit;
- (id)eventDictionaryWithEvent:(id)a0;
- (void)invalidPoseDetected;
- (void)rangingFailedWithError:(id)a0;
- (void)revokeProximityLevel;
- (void)sendAnalyticsEvent:(id)a0;
- (void)sendLiveOnAnalytics:(id)a0;
- (void)targetMovingStateChanged:(BOOL)a0;
- (void)updateWithProximityLevel:(id)a0;
- (void)updateWithRssiMeasurement:(id)a0;

@end
