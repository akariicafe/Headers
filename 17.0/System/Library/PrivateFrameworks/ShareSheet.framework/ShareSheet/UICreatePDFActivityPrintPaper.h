@interface UICreatePDFActivityPrintPaper : UIPrintPaper

@property (nonatomic) struct CGSize { double width; double height; } _paperSize;

- (struct CGSize { double x0; double x1; })paperSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })printableRect;
- (id)_keywordForPDFMetadata;
- (id)initWithPaperSize:(struct CGSize { double x0; double x1; })a0;

@end
