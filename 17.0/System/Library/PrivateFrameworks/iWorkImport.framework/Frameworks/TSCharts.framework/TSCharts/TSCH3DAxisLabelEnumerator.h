@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *_axis;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxis:(id)a0 kind:(id)a1;

- (void)update;
- (int)labelPosition;
- (unsigned long long)count;
- (id)string;
- (void).cxx_destruct;
- (BOOL)shouldRender;
- (id)initWithAxis:(id)a0 kind:(id)a1;
- (id)stringForLabelResources:(id)a0;

@end
