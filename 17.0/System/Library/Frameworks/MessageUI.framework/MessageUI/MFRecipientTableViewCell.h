@class UIColor, NSArray, UILabel, MFComposeRecipient;

@interface MFRecipientTableViewCell : UITableViewCell {
    MFComposeRecipient *_recipient;
    UIColor *_tintColor;
    BOOL _shouldHideDetailLabel;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic) BOOL shouldHighlightCompleteMatches;
@property (nonatomic) BOOL shouldDimIrrelevantInformation;

+ (double)height;
+ (id)_defaultTintColor;
+ (id)identifier;
+ (id)cellForRecipient:(id)a0;
+ (double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)a0 containerWidth:(double)a1;
+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)a0 constrainedToWidth:(double)a1 overflowRecipients:(out id *)a2 useHighlighting:(BOOL)a3;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)a0 useHighlighting:(BOOL)a1;
+ (double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)a0 containerWidth:(double)a1;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)a0 withSortedRecipientList:(id)a1;
+ (double)_deviceSpecificLayoutMargin;
+ (double)_realDetailButtonAccessoryMargin;
+ (id)_tintedAttributedString:(id)a0 toColor:(id)a1 shouldDim:(BOOL)a2;
+ (id)defaultDetailStringAttributes;
+ (id)defaultTitleStringAttributes;
+ (double)detailLineHeight;
+ (id)groupDetailStringAttributes;
+ (double)heightWithRecipient:(id)a0 width:(double)a1;
+ (id)highlightedDetailStringAttributes;
+ (id)highlightedTitleStringAttributes;
+ (id)labelDetailStringAttributes;
+ (id)regularTitleStringAttributes;

- (void)setBackgroundColor:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (id)tintColor;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setRecipient:(id)a0;
- (id)recipient;
- (void)setTintColor:(id)a0 animated:(BOOL)a1;
- (void)animateSnapshotOfLabel:(id)a0 withBlock:(id /* block */)a1;
- (void)updateActiveConstraints;

@end
