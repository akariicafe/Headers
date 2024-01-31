@class NSString, UIImageView, UIImage, UILabel, HKSeparatorLineView;

@interface HRMiniTilePlatterView : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) HKSeparatorLineView *separatorView;
@property (retain, nonatomic) UILabel *actionLabel;

- (id)_titleFont;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)_bodyFont;
- (void)_setupView;
- (id)_actionFont;
- (id)_titleFontTextStyle;
- (id)_footnoteFont;
- (id)_actionTextStyle;
- (double)_bodyBottomToFootnoteTop;
- (id)_bodyFontTextStyle;
- (id)_footnoteTextStyle;
- (double)_titleBottomToBodyTop;
- (id)initWithtitle:(id)a0 body:(id)a1 footnote:(id)a2 icon:(id)a3 actionText:(id)a4;

@end
