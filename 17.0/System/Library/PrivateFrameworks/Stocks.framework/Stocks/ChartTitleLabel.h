@class Stock, LabelSequenceView;

@interface ChartTitleLabel : UIView {
    LabelSequenceView *_leftView;
    LabelSequenceView *_rightView;
    double _width;
    Stock *_stock;
    Stock *_deferredStock;
}

- (void)setBackgroundColor:(id)a0;
- (id)init;
- (void)setOpaque:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_stockWillBeRemoved:(id)a0;
- (void)prepareStringsForDeferredStockIfNeeded;
- (void)prepareStringsWithStock:(id)a0 width:(double)a1;
- (void)setLabelsHidden:(BOOL)a0;

@end
