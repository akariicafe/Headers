@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (id)archiver;
- (double)topMargin;
- (id)fileName;
- (void)setFileName:(id)a0;
- (double)rightMargin;
- (double)leftMargin;
- (void).cxx_destruct;
- (double)bottomMargin;
- (id)documentTitle;
- (double)headerMargin;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;
- (void)mapDefaultCssStylesAt:(id)a0;
- (void)mapWithState:(id)a0;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (id)styleMatrix;

@end
