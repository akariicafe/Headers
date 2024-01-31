@class _MKUILabel, UIView;

@interface MKPhotoSmallAttributionView : UIView {
    _MKUILabel *_label;
    UIView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (id)initWithMapItem:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)attributionFont;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
