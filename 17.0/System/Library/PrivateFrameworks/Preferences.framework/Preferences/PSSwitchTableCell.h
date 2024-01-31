@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) BOOL loading;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setValue:(id)a0;
- (BOOL)canReload;
- (id)controlValue;
- (void)setCellEnabled:(BOOL)a0;
- (id)newControl;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldUseModernLayout;

@end
