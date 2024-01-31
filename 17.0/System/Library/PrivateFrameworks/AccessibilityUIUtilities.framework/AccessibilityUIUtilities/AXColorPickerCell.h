@interface AXColorPickerCell : PSControlTableCell

- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void)setValue:(id)a0;
- (BOOL)canReload;
- (id)accessibilityValue;
- (id)controlValue;
- (id)newControl;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (id)_colorValue;

@end
