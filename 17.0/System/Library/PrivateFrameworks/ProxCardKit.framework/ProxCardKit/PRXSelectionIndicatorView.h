@class UIImageView;

@interface PRXSelectionIndicatorView : UIView {
    UIImageView *_selectedImageView;
    UIImageView *_deselectedImageView;
}

@property (nonatomic, getter=isSelected) BOOL selected;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
