@class RUIElement, RUIHTMLHeaderElement, RUIPage, RUIHTMLHeaderView, RUIObjectModel, UIView, UIScrollView, NSString, _TtC8RemoteUI28RUITextActivityIndicatorView, UITextField, UIColor, PSPasscodeField, RUIHeaderElement;
@protocol RemoteUITableFooter, RUIPasscodeField, RUIHeader;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, CAAnimationDelegate, PSPasscodeFieldDelegate, RUITopLevelPageElement> {
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    BOOL _appeared;
    unsigned long long _passcodeValidationAttempts;
    double _keyboardHeight;
    PSPasscodeField *_passcodeField;
}

@property (retain, nonatomic) _TtC8RemoteUI28RUITextActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) BOOL shouldManageScrollViewInsets;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (copy, nonatomic) NSString *submittedPIN;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIHTMLHeaderElement *HTMLHeader;
@property (retain, nonatomic) RUIElement *footer;
@property (readonly, nonatomic) UIView<RUIPasscodeField> *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)sourceURL;
- (id)headerView;
- (id)footerView;
- (id)view;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)scrollView;
- (void)viewWillDisappear:(BOOL)a0;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)keyboardFrameDidChange:(id)a0;
- (void)stopActivityIndicator;
- (void)_doneButtonTapped:(id)a0;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (id)passcodeView;
- (void)setImageAlignment:(int)a0;
- (void)populatePostbackDictionary:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (id)HTMLHeaderView;
- (void)_complexPasscodeFieldDidChange:(id)a0;
- (void)_clearPasscode;
- (void)_jiggleView:(id)a0;
- (id)_passcodeFieldAccessibilityIdentifier;
- (BOOL)_requiresLocalPasscodeValidation;
- (void)_updateFieldSpacer;
- (void)autofillWithToken:(id)a0;
- (void)footerView:(id)a0 activatedLinkWithURL:(id)a1;
- (void)performAction:(int)a0 forElement:(id)a1 completion:(id /* block */)a2;
- (void)startActivityIndicator;
- (id)subElementWithID:(id)a0;
- (void)submitPIN;
- (void)viewDidLayout;

@end
