@class NSData;

@interface RCWaveformSegment : NSObject <NSSecureCoding> {
    NSData *_averagePowerLevelData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { double beginTime; double endTime; } timeRange;
@property (nonatomic) BOOL isRendered;
@property (readonly, nonatomic) const float *averagePowerLevels;
@property (readonly, nonatomic) long long averagePowerLevelsCount;

+ (id)segmentsByReparingDiscontinuitiesInSegments:(id)a0;
+ (void)initialize;
+ (id)_segmentByMergingMergableSegments:(id)a0;
+ (id)_segmentsByJoiningSegment:(id)a0 toSegmentIfNecessaryWithGreaterSegment:(id)a1 averagePowerLevelJoinLimit:(unsigned long long)a2;
+ (id)segmentsByMergingSegments:(id)a0 preferredSegmentDuration:(double)a1;
+ (id)segmentsByShiftingSegments:(id)a0 byTimeOffset:(double)a1;
+ (id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)a0;
+ (id)_mergedSegmentByFastMergingWithMergeableSegments:(id)a0 mergedLevelsDuration:(double)a1;
+ (id)_mergedSegmentByResamplingWithMergeableSegments:(id)a0 mergedLevelsDuration:(double)a1;
+ (id)emptySegmentWithTimeRange:(struct { double x0; double x1; })a0;
+ (id)segmentsByMergingSegments:(id)a0 preferredSegmentDuration:(double)a1 beforeTime:(double)a2 andThenUsePreferredSegmentDuration:(double)a3;

- (BOOL)isWaveformDataAlmostEqualToDataInSegment:(id)a0;
- (BOOL)isWaveformDataEqualToDataInSegment:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithAdjustedTimeRange:(struct { double x0; double x1; })a0;
- (id)verboseDescription;
- (id)segmentByClippingToTimeRange:(struct { double x0; double x1; })a0;
- (id)segmentsByJoiningIfSmallSegment:(id)a0 averagePowerLevelJoinLimit:(unsigned long long)a1;
- (id)_initWithTimeRange:(struct { double x0; double x1; })a0 averagePowerLevelData:(id)a1;
- (id)description;
- (id)initWithTimeRange:(struct { double x0; double x1; })a0 averagePowerLevelVector:(void *)a1;
- (BOOL)hasUniformPowerLevel:(float)a0;
- (void).cxx_destruct;
- (id)simpleDescription;
- (id)copyWithTimeRangeOffsetByTimeOffset:(double)a0;
- (id)segmentsByJoiningIfSmallSegment:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)a0 averagePowerLevelJoinLimit:(unsigned long long)a1;
- (id)initWithTimeRange:(struct { double x0; double x1; })a0 averagePowerLevelData:(id)a1;
- (id)_segmentWithValuesInContainedTimeRange:(struct { double x0; double x1; })a0;

@end
