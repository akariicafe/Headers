@class UILabel;

@interface SBHAddWidgetDetailSheetWidgetDescriptionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (id)_titleLabelFont;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_createConstraints;
- (id)_descriptionLabelFont;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end
