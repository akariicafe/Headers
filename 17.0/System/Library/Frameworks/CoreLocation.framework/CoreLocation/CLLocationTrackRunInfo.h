@class NSNumber;

@interface CLLocationTrackRunInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { int lapCount; double currentLapStartTime; double currentLapDurationInSeconds; double currentLapDistanceInMeters; double previousLapDurationInSeconds; double previousLapDistanceInMeters; struct { double latitude; double longitude; } previousLapPositionAtCompletionInDegrees; double currentTrackRunSessionDurationInSeconds; double currentTrackRunSessionDistanceInMeters; } lapInfo;
@property (readonly, nonatomic) long long laneNumber;
@property (readonly, nonatomic) long long laneCount;
@property (readonly, nonatomic) NSNumber *trackId;
@property (readonly, nonatomic) long long estimatedLaneNumber;
@property (readonly, nonatomic) int estimatedLaneConfidence;
@property (readonly, nonatomic) int trackProximity;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLapInfo:(struct { int x0; double x1; double x2; double x3; double x4; double x5; struct { double x0; double x1; } x6; double x7; double x8; })a0 laneNumber:(long long)a1 laneCount:(long long)a2 trackId:(id)a3 estimatedLaneNumber:(long long)a4 estimatedLaneConfidence:(int)a5 trackProximity:(int)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
