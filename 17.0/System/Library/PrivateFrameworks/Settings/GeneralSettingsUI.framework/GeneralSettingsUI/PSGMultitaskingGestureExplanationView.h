@class UILabel, PSGUnderlineButton, UIColor;

@interface PSGMultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_labels[4];
    PSGUnderlineButton *_videoLinkButton;
    double _sized;
    double _width;
    UIColor *_footerTextColor;
}

- (BOOL)isRTL;
- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0;
- (id)_accessibilityLabels;
- (id)newRegionSampleLabelUnderlined;

@end
