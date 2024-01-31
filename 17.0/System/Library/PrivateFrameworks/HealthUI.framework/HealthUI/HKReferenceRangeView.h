@class UIFont, HKReferenceRangeViewConfiguration, HKReferenceRangeDotView, HKReferenceRangeViewData, UIView, UILabel, NSString;

@interface HKReferenceRangeView : UIView {
    double _lowValueXPosition;
    double _highValueXPosition;
    double _currentValueXPosition;
    long long _valueDirection;
    double _intrinsicHeight;
    BOOL _showOutOfRangeIndicator;
}

@property (copy, nonatomic) HKReferenceRangeViewData *data;
@property (retain, nonatomic) UIView *referenceRangeView;
@property (retain, nonatomic) UIView *referenceRangeContainerView;
@property (retain, nonatomic) HKReferenceRangeDotView *currentValueView;
@property (retain, nonatomic) UILabel *lowValueLabel;
@property (retain, nonatomic) UILabel *highValueLabel;
@property (retain, nonatomic) UILabel *currentValueLabel;
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIFont *overriddenValueFont;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UILabel *outOfRangeLabel;
@property (readonly, nonatomic) HKReferenceRangeViewConfiguration *configuration;
@property (copy, nonatomic) NSString *multiValueSeparator;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateWithData:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupSubviews;
- (void)_applyNormalizedValuesToView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_assureLabelFrameWithinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_configuredPreferredFontForTextStyle:(id)a0 symbolicTraits:(unsigned int)a1;
- (id)_generateAttributedValueStringWithOverrideColor:(id)a0;
- (id)_generateMultilineAttributedValueStringForOriginalString:(id)a0;
- (BOOL)_hasReferenceRange;
- (void)_layoutCurrentValueOnly;
- (void)_layoutFullReferenceRange;
- (void)_normalizeValuesIfNeeded;
- (id)_outOfRangeColor;
- (void)_updateContainerBorderColors;
- (id)unitLabelFont;
- (id)valueLabelFont;

@end
