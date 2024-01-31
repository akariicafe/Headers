@interface TSCharts.TSCHChartPolarGridLayoutItem : TSCharts.TSCHChartGridLayoutItem <TSCharts.TSCHChartGridLayoutItemBaseLayout> {
    void /* unknown type, empty encoding */ baseLayoutRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rootedBaseLayoutRect;

- (id)initWithParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (id)renderersWithRep:(id)a0;

@end
