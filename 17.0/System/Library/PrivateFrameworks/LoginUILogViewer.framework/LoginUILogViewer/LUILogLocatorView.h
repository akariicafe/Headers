@class UIButton, UICollectionView;

@interface LUILogLocatorView : UIView

@property (retain, nonatomic) UIButton *upArrowButton;
@property (retain, nonatomic) UIButton *downArrowButton;
@property (retain, nonatomic) UIButton *screenshotButton;
@property (retain, nonatomic) UICollectionView *screenshotCollectionView;

- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createScreenshotCollectionView;
- (id)_createButtonWithImageName:(id)a0;
- (id)_createElementStackViewWithElements:(id)a0;
- (void)handleOrientationChange:(long long)a0;

@end
