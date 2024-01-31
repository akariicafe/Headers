@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
    UIView *_disabledView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (BOOL)canReload;
- (id)controlValue;
- (void)_configureLayout;
- (id)newControl;

@end
