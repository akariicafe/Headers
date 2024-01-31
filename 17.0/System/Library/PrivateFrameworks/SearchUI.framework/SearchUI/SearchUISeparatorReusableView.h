@class SFColor;

@interface SearchUISeparatorReusableView : SearchUICollectionReusableView

@property (retain, nonatomic) SFColor *backgroundColor;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
