@interface UIPrintPaper : NSObject {
    int _paperOrientation;
    id _internal;
}

@property double scalingFactor;
@property (readonly) struct CGSize { double x0; double x1; } paperSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } printableRect;

+ (id)bestPaperForPageSize:(struct CGSize { double x0; double x1; })a0 withPapersFromArray:(id)a1;
+ (id)_defaultPaperListForOutputType:(long long)a0;
+ (id)_genericPaperListForOutputType:(long long)a0;
+ (id)_defaultPKPaperForOuptutType:(long long)a0;
+ (id)_defaultPaperForOutputType:(long long)a0;
+ (id)_readyDocumentPaperListForPrinter:(id)a0 withDuplexMode:(long long)a1 contentSize:(struct CGSize { double x0; double x1; })a2 scaleUpForRoll:(BOOL)a3;
+ (id)_readyPaperListForPrinter:(id)a0 withDuplexMode:(long long)a1 forContentType:(long long)a2 contentSize:(struct CGSize { double x0; double x1; })a3;
+ (id)bestPaperForPageSize:(struct CGSize { double x0; double x1; })a0 andContentType:(long long)a1 withPapersFromArray:(id)a2;

- (id)description;
- (id)mediaType;
- (void).cxx_destruct;
- (id)_localizedName;
- (BOOL)isEqual:(id)a0;
- (id)_keywordForPDFMetadata;
- (void)_updatePKPaper:(id)a0;
- (id)_initWithPrintKitPaper:(id)a0;
- (id)_localizedMediaTypeName;
- (int)_paperOrientation;
- (id)_pkPaper;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_printableRectForDuplex:(BOOL)a0;
- (void)_setPaperOrientation:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })printRect;
- (struct CGSize { double x0; double x1; })unAdjustedPaperSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unAdjustedPrintableRect;

@end
