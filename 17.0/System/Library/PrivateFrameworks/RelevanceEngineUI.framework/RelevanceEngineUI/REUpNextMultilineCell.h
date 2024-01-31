@class UILayoutGuide, NSArray, CLKFont, CLKUIColoringLabel, REUpNextImageView, REUpNextAccessoryView;

@interface REUpNextMultilineCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    BOOL _showingHeader;
    BOOL _showingHeaderImage;
    BOOL _showingThreeLineLayout;
    BOOL _showingAccessory;
    BOOL _showingDescriptionImage;
    BOOL _usingStretchableImage;
    unsigned int _headerImageEdge;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_descriptionLine1Label;
    CLKUIColoringLabel *_descriptionLine2Label;
    REUpNextImageView *_headerImage;
    REUpNextAccessoryView *_accessoryView;
    REUpNextImageView *_descriptionImageView;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)_updateHeaderColor;
- (void)defaultTextColorDidChange;

@end
