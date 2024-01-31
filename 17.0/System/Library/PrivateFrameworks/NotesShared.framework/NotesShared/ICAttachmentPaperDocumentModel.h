@interface ICAttachmentPaperDocumentModel : ICAttachmentPaperBundleModel

@property (nonatomic) unsigned long long paperPageCount;

- (BOOL)supportsQuickLook;
- (id)additionalIndexableTextContentInNote;

@end
