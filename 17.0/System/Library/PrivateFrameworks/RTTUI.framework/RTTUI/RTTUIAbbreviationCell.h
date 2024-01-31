@class UILabel, UIVisualEffectView, UIView;

@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UIView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
}

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;

- (id)accessibilityLabel;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)dealloc;
- (id)accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAbbreviationData:(id)a0;
- (id)abbreviationText;

@end
