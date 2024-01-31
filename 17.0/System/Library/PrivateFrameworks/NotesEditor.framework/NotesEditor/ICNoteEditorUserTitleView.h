@class NSArray, UIAlertController, ICNote, UILabel, NSString, UIButton;
@protocol ICNoteEditorUserTitleViewDelegate;

@interface ICNoteEditorUserTitleView : UIView <UITextFieldDelegate>

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIButton *editButton;
@property (weak, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (weak, nonatomic) id<ICNoteEditorUserTitleViewDelegate> delegate;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) double preferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowUserTitleViewForNote:(id)a0;
+ (id)newUserTitleView;
+ (id)noteKeyPathsAffectingUserTitleView;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)updateConstraints;
- (void)setHidden:(BOOL)a0;
- (void)updateFonts;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
- (BOOL)accessibilityActivate;
- (id)accessibilityContainer;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityValue;
- (void)editButtonPressed:(id)a0;
- (void)noteWillBeDeleted:(id)a0;
- (void)updateContentToCurrentNote;

@end
