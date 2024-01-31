@class AVPlayerItem, NSString, NSURL, NSError, PFSlowMotionTimeRangeMapper;

@interface PXVideoContentProviderLoadingResult : NSObject

@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *resultDebugDescription;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *timeRangeMapper;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlayerItem:(id)a0 url:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 timeRangeMapper:(id)a3 error:(id)a4 priority:(long long)a5 description:(id)a6;

@end
