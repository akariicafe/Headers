@class TSCHChartRep;

@interface TSCH3DChartRepAs2D : TSCHChartRep {
    TSCHChartRep *m2DRep;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)addToSet:(id)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)p_create2DRep;
- (id)p_layoutFrom3DInfo:(id)a0 layout3D:(id)a1;
- (id)p_mutationsForConverting3DFillFromSeries:(id)a0;
- (void)p_update2DLayout;
- (void)renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
