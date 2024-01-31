@interface SearchUISettingToggleLeadingViewController : SearchUIThumbnailViewController

+ (BOOL)supportsRowModel:(id)a0;

- (struct CGSize { double x0; double x1; })thumbnailSize;
- (unsigned long long)type;
- (id)imageForRowModel:(id)a0 appearance:(id)a1;
- (double)symbolFontSize;

@end
