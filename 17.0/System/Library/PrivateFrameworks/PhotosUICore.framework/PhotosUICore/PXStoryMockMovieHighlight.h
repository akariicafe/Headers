@class NSData;

@interface PXStoryMockMovieHighlight : NSObject <PXStoryMovieHighlight>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) float qualityScore;
@property (retain, nonatomic) NSData *normalizationData;
@property (nonatomic) BOOL hasFace;
@property (nonatomic) BOOL hasVoice;
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) float loudness;
@property (nonatomic) float peakVolume;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackRect;
@property (nonatomic) float audioQualityScore;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestTimeRangeForTargetDuration:(double)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestTimeRangeForPreferredDuration:(double)a0 min:(double)a1 max:(double)a2;
- (id)initWithBestPlaybackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 score:(float)a1 bestPlaybackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 normalizationData:(id)a3 audioScore:(float)a4;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 score:(float)a1 bestPlaybackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 normalizationData:(id)a3 face:(BOOL)a4 voice:(BOOL)a5 music:(BOOL)a6 loudness:(float)a7 peak:(float)a8 audioScore:(float)a9;

@end
