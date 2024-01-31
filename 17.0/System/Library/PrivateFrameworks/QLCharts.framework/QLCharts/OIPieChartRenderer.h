@protocol OIPieSliceRenderer;

@interface OIPieChartRenderer : NSObject

@property (retain) id<OIPieSliceRenderer> sliceRenderer;
@property struct __OIChart { } *chart;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithChart:(struct __OIChart { } *)a0;
- (id)initWithChart:(struct __OIChart { } *)a0 sliceRenderer:(id)a1;
- (void)renderThreeDimensional:(BOOL)a0 pieFromSeriesArray:(struct __CFArray { } *)a1;

@end
