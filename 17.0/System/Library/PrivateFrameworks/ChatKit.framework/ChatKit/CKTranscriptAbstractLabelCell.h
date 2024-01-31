@class NSAttributedString;

@interface CKTranscriptAbstractLabelCell : CKTranscriptCell

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (nonatomic) BOOL wantsOffsetForReplyLine;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 displayScale:(double)a2;

- (void)prepareForReuse;
- (id)label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (void)clearFilters;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)cellView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAlignmentRect;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (BOOL)wantsDrawerLayout;

@end
