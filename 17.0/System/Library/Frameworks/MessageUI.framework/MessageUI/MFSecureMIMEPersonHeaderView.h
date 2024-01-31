@class NSString, NSArray, UIView, UILabel;

@interface MFSecureMIMEPersonHeaderView : UIView {
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    unsigned char _editing : 1;
}

@property (copy, nonatomic) NSString *signedLabelText;
@property (copy, nonatomic) NSString *secureLabelText;
@property (copy, nonatomic) NSString *warningLabelText;
@property (copy, nonatomic) NSString *explanationText;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL editing;

+ (id)_explanationLabelDefaultAttributes;

- (BOOL)showsButtons;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_insert:(BOOL)a0 subview:(id)a1;
- (id)_secureLabel;
- (void)_setText:(id)a0 forLabel:(id)a1;
- (id)_signedLabel;
- (id)_warningLabel;
- (double)heightOfBottomMargin;
- (double)heightThatFitsButtons;
- (double)heightThatFitsMainLabel:(struct CGSize { double x0; double x1; })a0;
- (double)heightThatFitsSubview:(id)a0 padding:(double)a1;
- (double)widthForSizingToFitSize:(struct CGSize { double x0; double x1; })a0;

@end
