@class UIView;

@interface PKAlignedContentContainerView : UIView {
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct { unsigned int horizontalAlignment; unsigned int verticalAlignment; } alignment;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContentView:(id)a0 alignment:(struct { unsigned int x0; unsigned int x1; })a1 size:(struct CGSize { double x0; double x1; })a2;

@end
