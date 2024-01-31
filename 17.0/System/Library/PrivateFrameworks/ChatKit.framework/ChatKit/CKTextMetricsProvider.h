@interface CKTextMetricsProvider : NSObject

- (id)_metricsForAttributedString:(id)a0 lineFragmentPadding:(double)a1 maximumNumberOfLines:(unsigned long long)a2 lineBreakMode:(long long)a3 targetSize:(struct CGSize { double x0; double x1; })a4;
- (id)_metricsForRequest:(id)a0 containerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)_metricsForRequest:(id)a0 containerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 minimumViewHeight:(double)a2;
- (id)metricsForRequest:(id)a0;

@end
