@class NSUUID, NSString, PRPose, NSURLSession, AKAppleIDSession, PRTargetEstimate, CARunData, CASessionData, NSDictionary, NSNumber, NSObject;
@protocol OS_os_log;

@interface PRFindMyCoreAnalytics : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSUUID *sessionId;
@property (retain, nonatomic) NSUUID *runId;
@property (nonatomic) long long eventNumber;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) NSNumber *isOwner;
@property (retain, nonatomic) PRPose *previousPose;
@property (retain, nonatomic) PRPose *previousPoseOfUser;
@property (retain, nonatomic) PRPose *oldPreviousPoseOfUser;
@property (retain, nonatomic) PRTargetEstimate *latestTarget;
@property (retain, nonatomic) NSNumber *rangeEstimate;
@property (retain, nonatomic) NSNumber *traveledDistance;
@property (retain, nonatomic) NSNumber *traveledDistanceOfUser;
@property (retain, nonatomic) NSNumber *numberOfPoses;
@property (retain, nonatomic) NSNumber *numberOfRanges;
@property (nonatomic) BOOL shouldLogTargetFoundEvent;
@property (nonatomic) BOOL shouldLogMotionEvent;
@property (nonatomic) BOOL shouldLogEnteredArmsReachEvent;
@property (nonatomic) BOOL receivedfirstSOIRSSI;
@property (retain, nonatomic) AKAppleIDSession *authSession;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSString *authHeaderValue;
@property (retain, nonatomic) CASessionData *sessionData;
@property (retain, nonatomic) CARunData *runData;
@property (retain) NSDictionary *customData;

+ (BOOL)isInternalBuild;

- (void)resetState;
- (id)init;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)targetComputed:(id)a0;
- (void)addLatestTarget:(id)a0;
- (void)configureComplete;
- (void)configureSessionWithProductUUID:(id)a0 withOwner:(id)a1;
- (void)deinit;
- (id)eventDictionaryWithEvent:(id)a0;
- (void)firstArrowFromAoA;
- (void)firstArrowFromRange;
- (void)invalidPoseDetected;
- (void)rangingFailedWithError:(id)a0;
- (void)revokeRangeEstimate;
- (void)sendAnalyticsEvent:(id)a0;
- (void)sendLiveOnAnalytics:(id)a0;
- (void)targetMovingStateChanged:(BOOL)a0;
- (void)targetRevokedWithReason:(unsigned long long)a0;
- (void)torchButtonPresented;
- (void)torchChangedState:(BOOL)a0;
- (void)updateSOIRSSI:(double)a0;
- (void)updateTravelDistanceWithPose:(id)a0;
- (void)updateWithRangeEstimate:(id)a0;

@end
