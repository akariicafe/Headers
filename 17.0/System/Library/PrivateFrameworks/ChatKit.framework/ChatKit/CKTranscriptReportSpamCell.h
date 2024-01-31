@class UILabel, NSAttributedString, UIButton;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell

@property (class, readonly, nonatomic) NSAttributedString *internalPhishingWarning;

@property (readonly, nonatomic) UILabel *internalPhishingWarningLabel;
@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *reportSpamButton;
@property (nonatomic) BOOL showReportSMSSpam;

+ (id)internalPhishingWarningLabel;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)clearFilters;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })layoutSizeForWidth:(double)a0 applyLayout:(BOOL)a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;

@end
