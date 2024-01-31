@class UIImageView;

@interface PKCellAccessoryMultiSelectIndicator : UIView {
    UIImageView *_imageView;
}

+ (id)accessoryWithSelected:(BOOL)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSelected:(BOOL)a0;

@end
