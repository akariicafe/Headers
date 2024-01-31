@class UILayoutGuide, NSArray, CLKFont, REUpNextImageView, CLKUIColoringLabel;

@interface REUpNextLargeTextCell : REUpNextBaseCell {
    BOOL _showingHeaderImage;
    BOOL _showingBodyImage;
    unsigned int _currentImageEdge;
    CLKFont *_standardBodyFont;
    CLKFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_headerImage;
    REUpNextImageView *_bodyImage;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_bodyLabel;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)_updateHeaderColor;
- (void)defaultTextColorDidChange;

@end
