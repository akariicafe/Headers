@class NSString, UIColor, PSListController;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
    UIColor *_textColor;
    id _delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
}

@property (readonly, nonatomic) BOOL returnKeyTapped;
@property (weak, nonatomic) PSListController *controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (id)textField;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)prepareForReuse;
- (BOOL)isFirstResponder;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)resignFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)value;
- (BOOL)becomeFirstResponder;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (BOOL)isEditing;
- (BOOL)canResignFirstResponder;
- (void)setValue:(id)a0;
- (BOOL)canReload;
- (id)_defaultTextColor;
- (void)setPlaceholderText:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (void)controlChanged:(id)a0;
- (BOOL)_cellIsEditing;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)endEditingAndSave;
- (BOOL)isTextFieldEditing;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;

@end
