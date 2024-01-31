@class UILabel, NSString, NSAttributedString;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView

@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSAttributedString *attributedSubtitleText;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)a0;
- (void)_configureSubTitleLabelForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
