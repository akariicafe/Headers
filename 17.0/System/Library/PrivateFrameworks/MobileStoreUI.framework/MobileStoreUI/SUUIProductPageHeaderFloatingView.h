@class SUUIColorScheme, _UIBackdropView, UIView, UISegmentedControl;

@interface SUUIProductPageHeaderFloatingView : UIView {
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    BOOL _isPad;
}

@property (nonatomic) double backdropAlpha;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (readonly, nonatomic) UISegmentedControl *sectionControl;
@property (nonatomic) long long selectedSectionIndex;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_reloadBackdropView;
- (id)initWithSectionTitles:(id)a0 isPad:(BOOL)a1;

@end
