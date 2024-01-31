@interface TSWPApplicationDelegate : TSKApplicationDelegate

@property (readonly, nonatomic) BOOL showChineseNamedPointSizes;

- (id)defaultHyperlinkURL;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;

@end
