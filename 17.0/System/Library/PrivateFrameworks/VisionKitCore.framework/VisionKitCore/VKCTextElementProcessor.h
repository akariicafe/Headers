@interface VKCTextElementProcessor : NSObject

+ (void)addGroupingToDataDetectors:(id)a0 parentDocument:(id)a1;
+ (id)dataDetectorElementFromVNBarcodeObservation:(id)a0 loggingIndex:(long long)a1;
+ (id)dataDetectorsFromCRDocumentOutputRegion:(id)a0 shouldFilter:(BOOL)a1;
+ (id)textElementsFromCRDocumentOutputRegion:(id)a0;

@end
