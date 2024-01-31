@class UIStackView, NSString, UILabel, HKCaretOptionalTextField, UIView;
@protocol HKMedicalIDEditorCellEditDelegate;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField;
@property (retain, nonatomic) UIView *verticalSeparatorView;
@property (nonatomic) double minimumLabelWidth;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) id<HKMedicalIDEditorCellEditDelegate> editDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsLabelAndValue;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (void)_localeDidChange:(id)a0;
- (id)formattedValue;
- (void)beginEditing;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)commitEditing;
- (void)setupSubviews;
- (void)setupStackView;
- (void)updateValueLabel;
- (void)dismissInputView;
- (void)valueDidChange;

@end
