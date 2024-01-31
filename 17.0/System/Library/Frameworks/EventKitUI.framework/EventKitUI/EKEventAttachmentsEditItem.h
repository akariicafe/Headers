@class EKEvent, NSString, NSArray, EKUITableViewCell;

@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {
    NSArray *_cellControllers;
    EKUITableViewCell *_addAttachmentCell;
    BOOL _documentPickerPresented;
}

@property (retain) EKEvent *eventToModify;
@property BOOL attachmentsModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)owningEventForAttachmentCellController:(id)a0;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_cleanUpCellControllers;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (id)footerTitle;
- (void)_addAttachment:(id)a0;
- (void)refreshFromCalendarItemAndStore;
- (id)attachmentEvent;
- (id)_addAttachmentCell;
- (void)_loadAndAddDataAttachmentFromItem:(id)a0;
- (BOOL)_shouldCondenseIntoSingleItem;
- (BOOL)_shouldShowAddAttachmentCell;
- (void)_showAddAttachmentViewControllerAnimated:(BOOL)a0;
- (void)attachmentEditViewController:(id)a0 attachmentDidChange:(long long)a1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)forceTableReloadOnSave;
- (id)owningEventForAttachmentEditViewController:(id)a0;
- (void)prepareForReload;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)a0;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;

@end
