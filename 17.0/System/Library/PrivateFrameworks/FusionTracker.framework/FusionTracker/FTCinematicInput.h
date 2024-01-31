@class NSArray, FTCinematicTapRequest;

@interface FTCinematicInput : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceFrameTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } tapPosition;
@property (retain, nonatomic) FTCinematicTapRequest *tapRequest;
@property (retain, nonatomic) NSArray *observations;
@property (nonatomic) BOOL detectorDidRun;
@property (nonatomic) long long highPriorityTrackId;

- (id)init;
- (void).cxx_destruct;
- (struct vector<ft::Observation, std::allocator<ft::Observation>> { struct Observation *x0; struct Observation *x1; struct __compressed_pair<ft::Observation *, std::allocator<ft::Observation>> { struct Observation *x0; } x2; })mapToInternalObservations;

@end
