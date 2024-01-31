@class NSString, EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)_contentSizeCategoryChanged;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)setSelectedResponder:(id)a0;
- (void)tableViewDidScroll;

@end
