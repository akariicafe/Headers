@class UILabel;

@interface CKTranscriptLabelCell : CKTranscriptStampCell

@property (readonly, nonatomic) UILabel *label;

+ (id)reuseIdentifier;
+ (id)createStampLabelView;
+ (id)createStampTextView;

- (void)setAttributedText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributedText;

@end
