@class NSArray, NSString, PXPeopleNamePickerTitleView, NSLayoutConstraint, PXPeopleNamePickerResultsTableViewController;
@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) NSArray *savedRightBarItems;
@property (nonatomic) double yOffset;
@property (retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint;
@property (retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController;
@property (readonly, nonatomic) PXPeopleNamePickerTitleView *titleView;
@property (weak, nonatomic) id<PXPeopleNamePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_applicationDidEnterBackground;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)_keyboardDidShow:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)textFieldDidEndEditing:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPerson:(id)a0;
- (id)initWithFace:(id)a0;
- (void)_changePlaceholderTextOfTextField:(id)a0 toColor:(id)a1;
- (void)_hideResultsView;
- (void)_showResultsView;
- (double)_titleViewMaxWidthForEditing:(BOOL)a0;
- (void)adjustForAccessoryViewYOffset:(double)a0;
- (void)endNamingSession;
- (id)initWithPerson:(id)a0 orFace:(id)a1;

@end
