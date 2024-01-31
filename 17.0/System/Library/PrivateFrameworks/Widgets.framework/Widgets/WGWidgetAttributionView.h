@class UIColor, NSMutableAttributedString;

@interface WGWidgetAttributionView : UITextView {
    NSMutableAttributedString *_widgetAttributedString;
}

@property (retain, nonatomic) UIColor *legibilityTextColor;

+ (void)requestAttributedStringForIdentifier:(id)a0 withHandler:(id /* block */)a1;
+ (id)widgetAttributionIDsInOrder;

- (id)_paragraphStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithWidgetAttributedString:(id)a0;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (void)_configureAttributedString;

@end
