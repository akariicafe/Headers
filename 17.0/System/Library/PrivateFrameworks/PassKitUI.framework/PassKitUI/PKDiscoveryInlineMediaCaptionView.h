@class UILabel, NSString;

@interface PKDiscoveryInlineMediaCaptionView : PKDiscoveryShelfView {
    UILabel *_captionLabel;
    NSString *_captionText;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCaptionText:(id)a0;

@end
