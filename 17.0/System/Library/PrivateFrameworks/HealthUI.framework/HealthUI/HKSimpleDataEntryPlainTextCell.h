@class NSNumber, NSString, NSArray, UILabel, HKCaretOptionalTextField, UIView;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate> {
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    BOOL _editDisabled;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField;
@property (retain, nonatomic) NSString *lastChangedText;
@property (weak, nonatomic) id<HKSimpleDataEntryCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_setupLabels;
- (void)_informDelegateForContentChange;
- (void)_setupInputTextFieldWithIntention:(long long)a0;
- (void)_setupLayoutConstraints;
- (BOOL)editDisabled;
- (id)initWithIntention:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEditDisabled:(BOOL)a0;
- (void)textFieldDidChangeValue:(id)a0;

@end
