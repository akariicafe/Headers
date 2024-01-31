@class MNEVChargingStateMonitor, MNNavigationSessionState;

@interface _MNArrivalUpdaterDetails : NSObject

@property (retain, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (nonatomic) BOOL isEVCharging;
@property (retain, nonatomic) MNEVChargingStateMonitor *evChargingStateMonitor;
@property (nonatomic) BOOL isInParkingDetectionRegion;

- (void).cxx_destruct;

@end
