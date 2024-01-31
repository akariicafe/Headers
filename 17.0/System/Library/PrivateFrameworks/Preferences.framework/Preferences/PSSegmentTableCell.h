@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (BOOL)canReload;
- (id)controlValue;
- (id)newControl;
- (void)setValues:(id)a0 titleDictionary:(id)a1;

@end
