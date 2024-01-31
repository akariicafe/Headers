@class VUILabel, NSString, VUIVideoAdvisoryViewLayout;

@interface VUIVideoAdvisoryLegendView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) VUILabel *legendNameLabel;
@property (retain, nonatomic) VUILabel *legendDescriptionLabel;
@property (copy, nonatomic) NSString *legendName;
@property (copy, nonatomic) NSString *legendDescription;

- (id)initWithLayout:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })legendDescriptionSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })legendNameSizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
