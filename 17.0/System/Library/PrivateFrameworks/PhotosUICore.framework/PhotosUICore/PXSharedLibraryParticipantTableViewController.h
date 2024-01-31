@class NSString, PXSharedLibraryParticipantDataSourceManager, PXSharedLibraryParticipantDataSource;
@protocol PXSharedLibraryParticipantTableViewControllerDelegate;

@interface PXSharedLibraryParticipantTableViewController : UITableViewController <PXPhotoRecipientViewControllerDelegate, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) PXSharedLibraryParticipantDataSource *dataSource;
@property (readonly, nonatomic) BOOL canAddParticipants;
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) double tableViewHeight;
@property (nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled;
@property (weak, nonatomic) id<PXSharedLibraryParticipantTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithDataSourceManager:(id)a0;
- (void)loadView;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_handleAddRecipient;
- (void)_updateAddButton;
- (void)_updateRowHeight;
- (void)_updateTableViewHeight;
- (void)photoRecipientViewController:(id)a0 didCompleteWithRecipients:(id)a1;
- (void)photoRecipientViewControllerDidCancel:(id)a0;

@end
