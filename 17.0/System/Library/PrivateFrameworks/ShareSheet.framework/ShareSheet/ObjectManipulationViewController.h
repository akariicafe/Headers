@class UIViewController, NSArray, NSMutableDictionary, UIVisualEffectView, NSString, UITableView;
@protocol ObjectManipulationDelegate;

@interface ObjectManipulationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *customizationGroups;
@property (retain, nonatomic) NSArray *customizations;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) id<ObjectManipulationDelegate> refreshDelegate;
@property (retain, nonatomic) UIViewController *itemPreviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_reloadCustomizations;
- (void)didToggleSwitch:(id)a0;
- (void)dismissKeyboard:(id)a0;
- (id)initWithCustomizationGroups:(id)a0;

@end
