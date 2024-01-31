@class UILayoutGuide, REUpNextImageView, CLKUIColoringLabel;

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_bodyImage;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_bodyLabel;
    CLKUIColoringLabel *_detail1Label;
    CLKUIColoringLabel *_detail2Label;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)_updateHeaderColor;
- (void)defaultTextColorDidChange;

@end
