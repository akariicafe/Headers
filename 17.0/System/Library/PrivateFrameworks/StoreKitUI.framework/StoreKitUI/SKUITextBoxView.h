@class SKUIColorScheme, NSString, UIImageView, UILabel;

@interface SKUITextBoxView : UIControl {
    UILabel *_moreButtonLabel;
    UIImageView *_ratingImageView;
    UILabel *_ratingLabel;
    UILabel *_subtitleLabel;
    struct __CTFrame { } *_textFrame;
    UILabel *_titleLabel;
    struct __CTFrame { } *_titleTextFrame;
    struct __CTLine { } *_truncationToken;
    NSString *_underlyingText;
    BOOL _titleTextIsNaturallyRTL;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleInsets;
@property (nonatomic) long long numberOfVisibleLines;
@property (nonatomic) long long truncationStyle;
@property (copy, nonatomic) NSString *moreButtonTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double rating;
@property (copy, nonatomic) NSString *ratingText;
@property (nonatomic) BOOL textIsNaturallyRTL;

- (void)setBackgroundColor:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_moreButtonLabel;
- (struct __CTFrame { } *)_textFrame;
- (struct CGSize { double x0; double x1; })_textSizeToFitSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFixedWidthTextFrame:(struct __CTFrame { } *)a0;
- (void)setFixedWidthTitleTextFrame:(struct __CTFrame { } *)a0;
- (void)setTextFrameWithText:(id)a0;

@end
