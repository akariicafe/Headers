@class UITextView;

@interface CKRecoverableSectionDisclosureView : UICollectionReusableView

@property (retain, nonatomic) UITextView *disclosureView;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_disclosureAttributedText:(id)a0;
- (id)_junkFilteringDisclosureAttributedText;
- (id)_recentlyDeletedDisclosureAttributedText;
- (void)configureForJunkFiltering;
- (void)configureForRecentlyDeleted;

@end
