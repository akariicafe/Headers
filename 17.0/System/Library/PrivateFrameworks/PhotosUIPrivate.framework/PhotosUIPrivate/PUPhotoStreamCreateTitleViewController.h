@class UITextView, NSString, UITextField, NSArray, UILabel, UINavigationItem, NSLayoutConstraint;
@protocol PUPhotoStreamCreateTitleDelegate;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    NSArray *_constraints;
    BOOL _hidePlaceholder;
    UILabel *_axPlaceholderLabel;
    NSLayoutConstraint *_standardHeightConstraint;
    NSLayoutConstraint *_axHeightConstraint;
}

@property (nonatomic) id<PUPhotoStreamCreateTitleDelegate> titleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)_setTitle:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentSizeForViewInPopover;
- (id)navigationItem;
- (void)textViewDidChange:(id)a0;
- (void)_addConstraintsForTraitCollection:(id)a0;
- (void)_cancelPost:(id)a0;
- (void)contentSizeChanged;

@end
