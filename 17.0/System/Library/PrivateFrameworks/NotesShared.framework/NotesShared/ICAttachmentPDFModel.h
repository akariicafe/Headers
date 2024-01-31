@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)contentTextFromPDFAtURL:(id)a0;

- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (BOOL)canMarkup;
- (BOOL)providesStandaloneTitleForNote;
- (id)searchableTextContent;
- (id)standaloneTitleForNote;

@end
