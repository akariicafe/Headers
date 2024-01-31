@class UILayoutGuide, UIImageView, CLKFont, CLKUIColoringLabel, NSArray, NSLayoutConstraint;

@interface REUpNextThumbnailCell : REUpNextBaseCell {
    UILayoutGuide *_labelLayoutGuide;
    UIImageView *_imageView;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_descriptionLine1Label;
    CLKUIColoringLabel *_descriptionLine2Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThreeLineLayout;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)defaultTextColorDidChange;

@end
