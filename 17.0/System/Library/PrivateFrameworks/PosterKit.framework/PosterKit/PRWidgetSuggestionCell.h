@class UIImage, UIImageView, SBHWidgetWrapperViewController;

@interface PRWidgetSuggestionCell : UICollectionViewCell

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_descendantsShouldHighlight;

@end
