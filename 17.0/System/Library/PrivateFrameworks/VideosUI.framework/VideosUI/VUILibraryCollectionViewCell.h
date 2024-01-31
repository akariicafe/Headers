@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
