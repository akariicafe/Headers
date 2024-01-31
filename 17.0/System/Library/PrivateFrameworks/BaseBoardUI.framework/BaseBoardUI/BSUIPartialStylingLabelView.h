@class UIFont, NSString, UIColor, UILabel, NSAttributedString;

@interface BSUIPartialStylingLabelView : UIView {
    id /* block */ _rangeFindingBlock;
    UILabel *_tokenTypeLabel;
    NSString *_rawText;
    NSAttributedString *_rawAttributedText;
}

@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic, getter=_textAlignmentFollowsWritingDirection, setter=_setTextAlignmentFollowsWritingDirection:) BOOL _textAlignmentFollowsWritingDirection;
@property (readonly, nonatomic) UILabel *contentLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (id)initWithRangeFindingBlock:(id /* block */)a0;
- (id)initWithTokenType:(long long)a0;

@end
