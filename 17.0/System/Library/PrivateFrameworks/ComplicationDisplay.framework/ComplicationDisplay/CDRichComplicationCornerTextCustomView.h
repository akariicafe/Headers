@class UIView;

@interface CDRichComplicationCornerTextCustomView : CDRichComplicationCornerBaseTextView {
    UIView *_outerView;
}

- (id)_outerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_outerViewDiameter;
- (id)initWithFontFallback:(long long)a0;

@end
