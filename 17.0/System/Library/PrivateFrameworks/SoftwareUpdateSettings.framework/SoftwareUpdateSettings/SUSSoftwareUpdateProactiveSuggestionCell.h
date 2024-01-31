@class UILabel, UIImageView, NSArray;

@interface SUSSoftwareUpdateProactiveSuggestionCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_iconImage;
    NSArray *_titleAndContentVerticalConstaints;
    NSArray *_titleOnlyVerticalConstaints;
}

- (void)setContent:(id)a0;
- (id)content;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)_configureTitleLabel;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)a0;
- (void)_setupView;
- (void)setSystemIconNamed:(id)a0 withTintColor:(id)a1;
- (id)_configureContentLabel;
- (id)_configureIconImage;

@end
