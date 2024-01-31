@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer>

@property struct __OIChart { } *chart;

- (void)dealloc;
- (id)initWithChart:(struct __OIChart { } *)a0;
- (void)renderPieSliceFromSeries:(struct __OISeries { } *)a0 radius:(double)a1 angle:(double)a2 newAngle:(double)a3 xOffset:(double)a4 yOffset:(double)a5 thickness:(double)a6;

@end
