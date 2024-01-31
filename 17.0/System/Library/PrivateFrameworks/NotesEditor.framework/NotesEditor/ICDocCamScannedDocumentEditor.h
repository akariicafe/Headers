@class NSUndoManager, ICAttachment, ICAttachmentGalleryModel;

@interface ICDocCamScannedDocumentEditor : NSObject

@property (retain, nonatomic) ICAttachment *galleryAttachment;
@property (readonly, nonatomic) ICAttachmentGalleryModel *galleryModel;
@property (retain, nonatomic) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)applyFilter:(short)a0 forAttachmentAtIndex:(unsigned long long)a1;
- (void)applyFilter:(short)a0 forAttachmentWithIdentifier:(id)a1;
- (void)deletePagesAtIndexes:(id)a0;
- (unsigned long long)indexForAttachmentWithIdentifier:(id)a0;
- (id)initWithGalleryAttachment:(id)a0;
- (BOOL)moveObjectWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (void)movePageFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)saveAndUpdatePreview:(BOOL)a0;
- (void)setMarkupData:(id)a0 forAttachmentWithIdentifier:(id)a1;
- (BOOL)setOrientation:(long long)a0 forAttachment:(id)a1;
- (void)setOrientation:(long long)a0 forAttachmentAtIndex:(unsigned long long)a1;
- (void)setQuad:(id)a0 forAttachment:(id)a1;
- (void)setQuad:(id)a0 forAttachmentWithIdentifier:(id)a1;
- (id)subAttachmentWithIdentifier:(id)a0;
- (void)undeleteSubAttachment:(id)a0;
- (void)undoablyDeleteSubAttachments:(id)a0 actionName:(id)a1;
- (void)undoablyMoveAttachmentWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (void)undoablySetOrientation:(long long)a0 forAttachmentIdentifier:(id)a1;
- (void)undoablySetQuad:(id)a0 forAttachment:(id)a1;
- (void)undoablyUndeleteSubAttachments:(id)a0 actionName:(id)a1;
- (void)undoablyUpdateTitle:(id)a0 forAttachmentWithIdentifier:(id)a1 isUserDefined:(BOOL)a2;
- (void)updateDocumentTitle:(id)a0 isUserDefined:(BOOL)a1;
- (BOOL)updateTitle:(id)a0 forSubAttachment:(id)a1;

@end
