@class ICSearchResultsQuery, NSMutableDictionary, NSNumber;

@interface ICTipKitSignaler : NSObject

@property (retain, nonatomic) NSMutableDictionary *noteModificationDateByIdentifier;
@property (retain, nonatomic) ICSearchResultsQuery *queryForClassifiedImages;
@property (retain, nonatomic) NSNumber *hasClassifiedImages;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)noteWasViewed:(id)a0 modificationDate:(id)a1;
- (void)_clearHasSentSearchSignal:(id)a0;
- (BOOL)_hasSentSearchSignal:(id)a0;
- (void)_sendSignalForEventWithIdentifier:(id)a0 context:(id)a1;
- (void)_setHasSentSearchSignal:(id)a0;
- (void)attachmentAdded:(id)a0;
- (void)clearHasSentHandwritingSearchResultSelectedSignal;
- (void)clearHasSentImageObjectSearchResultSelectedSignal;
- (void)clearHasSentScannedDocumentSearchResultSelectedSignal;
- (id)clientContextMapForKeys:(id)a0 selectedObject:(id)a1;
- (void)documentImageAdded:(id)a0;
- (void)fetchHasClassifiedImagesWithCompletionHandler:(id /* block */)a0;
- (void)galleryAttachmentAddedFromCloud:(id)a0;
- (void)hashtagAdded:(id)a0;
- (void)noteDidSave:(id)a0;
- (void)notePinnedStatusChanged:(id)a0;
- (void)sendSignalForHashtagAdded:(id)a0;
- (void)sendSignalForNoteCollaborated:(id)a0;
- (void)sendSignalForNoteDocumentImageAdded:(id)a0;
- (void)sendSignalForNoteDocumentScannerUsed:(id)a0;
- (void)sendSignalForNoteEdited:(id)a0;
- (void)sendSignalForNoteEditorCameraButtonTapped:(id)a0;
- (void)sendSignalForNoteEditorMoreButtonTapped:(id)a0;
- (void)sendSignalForNotePinned:(id)a0;
- (void)sendSignalForNoteSharedViaMailOrMessages:(id)a0;
- (void)sendSignalForNoteViewed:(id)a0;
- (void)sendSignalForSearchResultSelectedIfNecessary:(id)a0;
- (void)sendSignalForSmartFolderAdded:(id)a0;
- (void)smartFolderAdded:(id)a0;

@end
