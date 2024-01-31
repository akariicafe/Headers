@class NSArray, IPPronounValidator, NSString;
@protocol IPPronounPickerViewControllerDelegate;

@interface IPPronounPickerViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) id<IPPronounPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) IPPronounValidator *pronounValidator;
@property (retain, nonatomic) NSArray *pronounInfos;
@property (retain, nonatomic) NSString *currentLanguage;
@property (nonatomic) BOOL viewHasChangedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayPronounPicker;
+ (id)pronounPickerViewControllerWithDelegate:(id)a0;
+ (BOOL)shouldDisplayPronounPickerByDefault;
+ (double)heightForExplanatoryText:(id)a0 width:(double)a1;
+ (id)pronounPickerHeaderText;
+ (id)unsupportedLanguageFooterText;
+ (id)viewForExplanatoryText:(id)a0 width:(double)a1;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateDoneButton;
- (void)handleCancel;
- (void)handleDone;
- (void)autofillEmptyFields;
- (id)createLanguageMenuButton;
- (void)handlePronounFieldContentDidChange:(id)a0;
- (void)initializePronounInfos;
- (void)pronounFieldContentDidChange:(id)a0;
- (id)pronounInfoForEntryField:(id)a0;
- (long long)pronounInfoIndexFromSectionIndex:(long long)a0;
- (void)sendResultToDelegate:(id)a0;
- (void)setUpTableHeaderAndFooter;
- (BOOL)shouldShowLanguagePopup;
- (void)userChangedLanguage:(id)a0;

@end
