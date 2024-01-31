@class NSString, ICGalleryAttachmentEditorController;

@interface ICBrickGalleryAttachmentView : ICBrickTextAttachmentView <ICGalleryAttachmentEditorControllerDelegate>

@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryEditorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didChangeAttachmentTitle;
- (void)didChangeMergeableData;
- (void)didTapAttachment:(id)a0;
- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (void)openAttachment;

@end
