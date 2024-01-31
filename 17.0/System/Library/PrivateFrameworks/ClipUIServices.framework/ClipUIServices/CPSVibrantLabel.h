@class NSString, UILabel;

@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting> {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTextStyle:(id)a0 textVariant:(long long)a1 vibrancyEffectStyle:(long long)a2;

@end
