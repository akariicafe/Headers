@class NSArray, NSDictionary, FTCinematicTapResponse;

@interface FTCinematicTrackingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceFrameTimestamp;
@property (retain, nonatomic) NSArray *tracks;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } mostRecentTapTime;
@property (nonatomic) BOOL detectorDidRun;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) FTCinematicTapResponse *tapResponse;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
