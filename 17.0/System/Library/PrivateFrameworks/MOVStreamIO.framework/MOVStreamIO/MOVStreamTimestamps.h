@class NSString, AVAssetTrack, NSArray, SampleTimeList;

@interface MOVStreamTimestamps : NSObject

@property (retain, nonatomic) SampleTimeList *timeList;
@property (retain, nonatomic) AVAssetTrack *assetTrack;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *times;
@property (readonly, nonatomic) NSArray *cmtimes;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) BOOL shouldStartTimestampsAtZero;
@property (nonatomic) BOOL shouldAppendEndOfStreamTimestamp;

- (id)init;
- (id)description;
- (void)clearCachedProperties;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })endTimeForAssetTrack:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })frameRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 to:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithAssetTrack:(id)a0;
- (id)sampleTimelineForAssetTrack:(id)a0;
- (id)sampleTimelineForAssetTrack:(id)a0 shouldStartTimestampsAtZero:(BOOL)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeAtIndex:(unsigned long long)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
