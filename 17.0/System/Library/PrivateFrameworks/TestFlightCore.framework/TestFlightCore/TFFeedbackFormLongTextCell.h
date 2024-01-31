@class NSString, UITextView, TFFeedbackEntryLongText;

@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate>

@property (readonly, nonatomic) UITextView *textView;
@property (retain, nonatomic) TFFeedbackEntryLongText *longTextEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_adjustedTextViewHeightForCandidateHeight:(double)a0 font:(id)a1;
+ (id)_createTextViewFontForTraitCollection:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeToFitText:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 inTraitEnvironment:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_textViewInsetsInTraitEnvironment:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForEntry:(id)a0 dataSource:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)_prepareForDisplayWithTraitCollection:(id)a0;
- (void)_updateCellHeightForTextIfNecessary;
- (void)_updateCellHeightForTextUpdatesInTableView:(id)a0;
- (void)applyContentsOfEntry:(id)a0;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataString:(id)a0;

@end
