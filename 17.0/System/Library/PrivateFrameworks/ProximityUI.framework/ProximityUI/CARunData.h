@class NSUUID, NSDictionary, NSNumber, NSObject;
@protocol OS_os_log;

@interface CARunData : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) NSNumber *isOwner;
@property (retain, nonatomic) NSDictionary *startEvent;
@property (retain, nonatomic) NSDictionary *firstTargetFoundEvent;
@property (retain, nonatomic) NSDictionary *firstRangeEvent;
@property (retain, nonatomic) NSDictionary *firstPoseEvent;
@property (retain, nonatomic) NSDictionary *stopEvent;
@property (retain, nonatomic) NSDictionary *armsReachEvent;
@property (retain, nonatomic) NSDictionary *firstTargetFoundFromRangeEvent;
@property (retain, nonatomic) NSDictionary *firstTargetFoundFromAoAEvent;
@property (retain, nonatomic) NSNumber *numberOfMotionEvents;
@property (retain, nonatomic) NSNumber *numberOfTargetFoundEvents;
@property (retain, nonatomic) NSNumber *numberOfTargetRevokedEvents;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;
@property (retain, nonatomic) NSNumber *numberOfInvalidPoseEvents;
@property (retain, nonatomic) NSNumber *numberOfVIORevokes;
@property (retain, nonatomic) NSNumber *numberOfTargetMotionRevokes;
@property (retain, nonatomic) NSNumber *numberOfRangeRevokes;
@property (retain, nonatomic) NSNumber *numberOfAoARevokes;
@property (retain, nonatomic) NSNumber *numberOfStraightPathRevokes;
@property (retain, nonatomic) NSNumber *numberOfHighResidualRevokes;
@property (nonatomic) double firstSOIRSSI;
@property (nonatomic) BOOL torchButtonPresented;
@property (nonatomic) BOOL torchTurnedOn;
@property (nonatomic) BOOL torchTurnedOff;

- (void)stop:(id)a0;
- (id)init;
- (void)error:(id)a0;
- (void)start:(id)a0;
- (void).cxx_destruct;
- (void)logData;
- (void)motion:(id)a0;
- (void)aoaRevoke:(id)a0;
- (void)firstPose:(id)a0;
- (void)firstRange:(id)a0;
- (void)highResidualRevoke:(id)a0;
- (void)invalidPose:(id)a0;
- (void)logFirstSOIRSSI:(double)a0;
- (void)rangeRevoke:(id)a0;
- (void)straightPathRevoke:(id)a0;
- (void)targetFound:(id)a0;
- (void)targetFoundFromAoA:(id)a0;
- (void)targetFoundFromRange:(id)a0;
- (void)targetMotionRevoke:(id)a0;
- (void)targetRevoked:(id)a0;
- (void)vioRevoke:(id)a0;

@end
