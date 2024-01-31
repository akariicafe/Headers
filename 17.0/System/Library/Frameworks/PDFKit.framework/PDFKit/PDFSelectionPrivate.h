@class UIColor, NSUUID, PDFDocument, NSMutableArray;

@interface PDFSelectionPrivate : NSObject {
    PDFDocument *document;
    UIColor *color;
    NSMutableArray *pageRanges;
    BOOL forceBreaks;
    struct __CFArray { } *cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}

- (void).cxx_destruct;

@end
