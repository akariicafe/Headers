@interface _TtC8TSChartsP33_A24BDC8710AF40968A8815BF7D0038C228TSCHChartRadarAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    void /* unknown type, empty encoding */ valueAxisLayoutItem;
    void /* unknown type, empty encoding */ categoryAxisLayoutItem;
    void /* unknown type, empty encoding */ categoryAxisGridlineTickmarkLayoutItem;
    void /* unknown type, empty encoding */ valueAxisGridlineTickmarkLayoutItem;
    void /* unknown type, empty encoding */ gridLayoutItem;
    void /* unknown type, empty encoding */ kTSCHMaxIterationsForBodyRectEstimation;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)buildSubTree;
- (void)layoutInward;
- (void)layoutOutward;
- (id)renderersWithRep:(id)a0;

@end
