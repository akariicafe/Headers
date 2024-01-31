@class NSMeasurementFormatter, AXMSemanticTextFactory, NSNumberFormatter;

@interface AXMTextLayoutManager : NSObject

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSMeasurementFormatter *measurementFormatter;

- (void).cxx_destruct;
- (id)_assembleLayoutCellsWithFeatures:(id)a0;
- (id)_assembleLayoutColumn:(id)a0;
- (id)_assembleLayoutHeader:(id)a0;
- (id)_assembleLayoutLines:(id)a0;
- (id)_assembleLayoutRegions:(id)a0;
- (id)_assembleLayoutRow:(id)a0;
- (id)_assembleLayoutRowFromCell:(id)a0;
- (id)_assembleLayoutSequences:(id)a0;
- (id)_assembleLayoutTable:(id)a0 header:(id)a1 columnItems:(id)a2;
- (id)_assembleNutritionLabelLayoutWithRows:(id)a0;
- (id)_assembleReceipt:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })detectCenterContourFromContours:(id)a0 withImageExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)documentWithNutritionLabel:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 requestHandler:(id)a2 metrics:(id)a3 error:(id *)a4;
- (id)documentWithReceipt:(id)a0 withTextSkew:(double)a1 canvasSize:(struct CGSize { double x0; double x1; })a2 preferredLocales:(id)a3 requestHandler:(id)a4 metrics:(id)a5 error:(id *)a6;
- (id)documentWithTable:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 preferredLocales:(id)a2 requestHandler:(id)a3 metrics:(id)a4 error:(id *)a5;
- (id)documentWithTextFeatures:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 preferredLocales:(id)a2 applySemanticAnalysis:(BOOL)a3 error:(id *)a4;
- (id)envelopeWithTextFeatures:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 preferredLocales:(id)a2 applySemanticAnalysis:(BOOL)a3 error:(id *)a4;
- (id)extractDataFromEnvelopeWithFeatures:(id)a0 preferredLocales:(id)a1 canvasSize:(struct CGSize { double x0; double x1; })a2;
- (id)featureCellsForNutritionLabelRows:(id)a0 withRequestHandler:(id)a1 withCanvasSize:(struct CGSize { double x0; double x1; })a2;
- (id)filterReceiptForGarbageText:(id)a0;
- (id)fractionDenominatorValues;
- (id)fractionDenominatorValuesWithOneAsNumerator;
- (id)getReceiptRows:(id)a0 preferredLocales:(id)a1 canvasSize:(struct CGSize { double x0; double x1; })a2;
- (id)getTableColumns:(id)a0;
- (id)getTableRows:(id)a0;
- (BOOL)hasConsecutiveCharacters:(id)a0 withLength:(unsigned long long)a1;
- (BOOL)hasConsecutiveDigits:(id)a0 withLength:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2;
- (id)initWithSemanticTextFactory:(id)a0;
- (BOOL)isBoundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinBoundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withNormalizedThreshold:(double)a2;
- (BOOL)isBoundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinNormalizedDistance:(double)a1 ofBoundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)largestDetectedContoursForImage:(id)a0;
- (id)measurementAbbreviationsToVerboseString;
- (id)nutritionLabelRowsForContourResults:(id)a0 normalizedNutritionLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fullImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 processedImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)preprocessNutritionLabel:(id)a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)preprocessReceipt:(id)a0 withTextSkew:(double)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 metrics:(id)a4 requestHandler:(id)a5 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
- (id)preprocessTable:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 metrics:(id)a3;
- (id)processFraction:(id)a0;
- (id)processMeasurement:(id)a0;
- (id)processNutritionLabelText:(id)a0;
- (id)processReceiptText:(id)a0 foundMerchantName:(BOOL *)a1 preferredLocales:(id)a2;
- (id)receiptRegularExpressions;
- (id)sortContourColumnResults:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2;
- (id)sortContourRowResults:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 minWidth:(double)a3 minHeight:(double)a4;
- (id)textColumnsForTable:(id)a0 sourceImage:(id)a1 requestHandler:(id)a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (id)textRowsForTable:(id)a0 sourceImage:(id)a1 requestHandler:(id)a2 canvasSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)verifyTable:(id)a0 sortedColumns:(id)a1;

@end
