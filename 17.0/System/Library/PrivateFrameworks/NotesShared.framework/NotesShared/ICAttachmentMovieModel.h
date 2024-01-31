@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)placeholderHeight;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (void)updateAttachmentSize;

@end
