@class NSString, UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, UIViewController;

@interface UIAlertView : UIView {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    id _retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    long long _alertViewStyle;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
}

@property (retain, nonatomic) id context;
@property (nonatomic) long long defaultButtonIndex;
@property (nonatomic) long long numberOfRows;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation;
@property (retain, nonatomic) NSString *bodyText;
@property (nonatomic) BOOL groupsTextFields;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long numberOfButtons;
@property (nonatomic) long long cancelButtonIndex;
@property (readonly, nonatomic) long long firstOtherButtonIndex;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long alertViewStyle;

+ (id)_alertViewForSessionWithRemoteViewController:(id)a0;
+ (id)_alertViewForWindow:(id)a0;
+ (id)_remoteAlertViewWithBlock:(id /* block */)a0;

- (id)keyboard;
- (void)dismiss;
- (BOOL)_isAnimating;
- (id)textField;
- (id)tableView;
- (void)dealloc;
- (void)show;
- (void)dismissAnimated:(BOOL)a0;
- (id)window;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_titleLabel;
- (id)_alertController;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)layout;
- (void)_setAccessoryView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)addButtonWithTitle:(id)a0 buttonClass:(Class)a1;
- (void)_updateButtonTitle:(id)a0 buttonIndex:(unsigned long long)a1;
- (id)_addButtonWithTitle:(id)a0;
- (id)_addTextFieldWithValue:(id)a0 label:(id)a1;
- (void)_dismissForTappedIndex:(long long)a0;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)_prepareAlertActions;
- (BOOL)_prepareToDismissForTappedIndex:(long long)a0;
- (id)_preparedAlertActionAtIndex:(unsigned long long)a0;
- (void)_setFirstOtherButtonIndex:(long long)a0;
- (void)_setIsPresented:(BOOL)a0;
- (void)_showAnimated:(BOOL)a0;
- (void)_textDidChangeInTextField:(id)a0;
- (void)_updateFirstOtherButtonEnabledState;
- (void)_updateMessageAndSubtitle;
- (long long)addButtonWithTitle:(id)a0;
- (id)addButtonWithTitle:(id)a0 label:(id)a1;
- (id)addTextFieldWithValue:(id)a0 label:(id)a1;
- (struct CGSize { double x0; double x1; })backgroundSize;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(long long)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 buttons:(id)a1 defaultButtonIndex:(int)a2 delegate:(id)a3 context:(id)a4;
- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3;
- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 defaultButton:(id)a3 cancelButton:(id)a4 otherButtons:(id)a5;
- (void)setTableShouldShowMinimumContent:(BOOL)a0;
- (id)textFieldAtIndex:(long long)a0;
- (int)textFieldCount;

@end
