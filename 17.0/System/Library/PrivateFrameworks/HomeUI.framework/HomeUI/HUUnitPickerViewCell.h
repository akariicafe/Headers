@class UILabel, NSAttributedString, NSString;

@interface HUUnitPickerViewCell : HUPickerViewCell

@property (retain, nonatomic) UILabel *unitLabel;
@property (readonly, nonatomic) NSAttributedString *longestValue;
@property (readonly, nonatomic) struct CGSize { double width; double height; } longestValueSize;
@property (copy, nonatomic) NSString *unitText;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_estimatedSizeForAttributedString:(id)a0;
- (id)effectiveUnitText;
- (void)reloadPickerView;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
