@class UILabel;

@interface PXScoreView : UIView {
    UILabel *_label;
    unsigned long long _colorScale;
}

- (id)init;
- (void)setScore:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColorScale:(unsigned long long)a0;

@end
