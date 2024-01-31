@class NSNumber;

@interface CMAPrecisionFindingAnalytics : NSObject {
    int _revokeReason;
    double _timestampOfFirstRawRange;
    double _timestampOfFirstAcceptedRange;
    double _timestampOfRecentDMSample;
    double _timestampOfPreviousDMSample;
    double _timestampOfFirstDMSample;
    double _totalTimeDuringRevoke;
    int _countDM;
    int _countWristUp;
    int _countWristDown;
    int _crown;
    int _wrist;
    int _countRawRange;
    int _countAcceptedRange;
    int _countRawRangeWhileConverging;
    int _countAcceptedRangeWhileConverging;
    int _countRawRangeDuringRevoke;
    int _countAcceptedRangeDuringRevoke;
    BOOL _wasFirstArcShown;
    BOOL _wasFirstRangeAccepted;
}

@property (retain, nonatomic) NSNumber *percentOfSessionInWristUp;
@property (retain, nonatomic) NSNumber *percentOfSessionInWristDown;
@property (retain, nonatomic) NSNumber *timeFromFirstRangeToFirstAcceptedRange;
@property (retain, nonatomic) NSNumber *firstAcceptedRange;
@property (retain, nonatomic) NSNumber *meanRawRangeFrequencyThroughoutSession;
@property (retain, nonatomic) NSNumber *meanAcceptedRangeFrequencyThroughoutSession;
@property (retain, nonatomic) NSNumber *meanRawRangeFrequencyWhileConverging;
@property (retain, nonatomic) NSNumber *meanAcceptedRangeFrequencyWhileConverging;
@property (retain, nonatomic) NSNumber *meanRawRangeFrequencyDuringRevoke;
@property (retain, nonatomic) NSNumber *meanAcceptedFrequencyQualityDuringRevoke;

- (id)init;
- (void)dealloc;
- (id)analyticsDictionary;
- (void)feedAcceptedRange:(struct CMARangeType { double x0; double x1; double x2; double x3; unsigned short x4; })a0;
- (void)feedDeviceMotion:(struct CMADeviceMotionType { double x0; struct { double x0; double x1; double x2; double x3; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a0;
- (void)feedRange:(struct CMARangeType { double x0; double x1; double x2; double x3; unsigned short x4; })a0;
- (void)feedRevokeReason:(int)a0;
- (void)feedWatchOrientation:(struct CMAWatchOrientationStruct { double x0; int x1; int x2; })a0;

@end
