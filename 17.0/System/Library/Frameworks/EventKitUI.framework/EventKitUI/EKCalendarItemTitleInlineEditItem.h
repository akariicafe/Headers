@class NSString, UITextField, UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem> {
    UITableViewCell *_titleCell;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (readonly, nonatomic) UITextField *titleTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)_contentSizeCategoryChanged:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)a0;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (id)_makeCell:(unsigned long long)a0;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)a0;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;

@end
