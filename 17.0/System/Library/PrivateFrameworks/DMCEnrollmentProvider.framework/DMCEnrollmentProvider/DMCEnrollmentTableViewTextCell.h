@class UITextView, NSString, UILabel, UIButton;

@interface DMCEnrollmentTableViewTextCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (nonatomic) unsigned long long layoutStyle;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UITextView *hiddenTextView;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) id /* block */ linkAction;
@property (nonatomic) BOOL bold;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double previousWidth;
@property (nonatomic) BOOL shouldCalculateLinkTextLineBreak;
@property (nonatomic) BOOL linkTextOnNextLine;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (double)_verticalMargin;
- (double)_horizontalMargin;
- (void)_updateTextFont;
- (id)_rectsOfLinkText;
- (id)_subTextFont;
- (id)_textFontIsBold:(BOOL)a0;
- (void)configureLinkText:(id)a0 forceLineBreak:(BOOL)a1 linkAction:(id /* block */)a2;
- (id)initWithText:(id)a0 bold:(BOOL)a1;
- (id)initWithText:(id)a0 bold:(BOOL)a1 subText:(id)a2 layoutStyle:(unsigned long long)a3;
- (BOOL)isMultipleLines:(id)a0;

@end
