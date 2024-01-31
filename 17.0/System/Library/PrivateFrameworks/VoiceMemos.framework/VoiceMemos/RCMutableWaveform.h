@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray *segments;

- (BOOL)clipToTimeRange:(struct { double x0; double x1; })a0;
- (void)addSegments:(id)a0;
- (void)removeAllSegments;
- (id)classForCoder;
- (void)setSegments:(id)a0;
- (void)removeSegment:(id)a0;
- (void)addSegment:(id)a0;

@end
