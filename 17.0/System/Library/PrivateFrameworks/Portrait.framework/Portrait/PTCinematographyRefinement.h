@class PTCinematographyFrameDetectionSmoother, NSMutableDictionary, NSNumber, NSMutableArray, PTCinematographyRefinementOptions;

@interface PTCinematographyRefinement : NSObject

@property (copy, nonatomic) PTCinematographyRefinementOptions *options;
@property (retain, nonatomic) NSMutableDictionary *globals;
@property (retain, nonatomic) PTCinematographyFrameDetectionSmoother *smoother;
@property (retain, nonatomic) NSMutableArray *frames;
@property (retain, nonatomic) NSNumber *refinedFrameNumber;
@property (nonatomic) unsigned long long firstIndexToLookForTransitions;
@property (nonatomic) unsigned long long recordingState;
@property (nonatomic) BOOL shouldReturnAllCachedFrames;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeDelayForRefinement;

- (void)stopRecording;
- (void)startRecording;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)addFrames:(id)a0;
- (id)refinedFrames;
- (void)_endSmoothedFrames;
- (id)_extractFramesReturningAll:(BOOL)a0;
- (id)_extractFramesToIndex:(unsigned long long)a0;
- (unsigned long long)_framesIndexForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_logRackFocusPullToFrameAtIndex:(unsigned long long)a0 fromIndex:(unsigned long long)a1 label:(id)a2;
- (void)_moveAlongSmoothedFrames;
- (BOOL)_needSnapshotForPolicy:(unsigned long long)a0;
- (void)_performLinearRackFocusPullToFrameAtIndex:(unsigned long long)a0 fromIndex:(long long)a1;
- (void)_performRackFocusPullToFrameAtIndex:(unsigned long long)a0;
- (void)_performRackFocusPullsStartingAtIndex:(unsigned long long)a0;
- (void)_updateGlobalsWithSnapshot:(id)a0;
- (void)_updateRecordingStateForSnapshot:(id)a0;
- (void)endOfFrames;
- (id)globalCinematographyDictionary;

@end
