@interface CRMutableRecognitionResult : CRRecognitionResult

- (void)addContentsOfRecognitionResult:(id)a0 shouldOverwriteExistingHandler:(id /* block */)a1;
- (void)addRecognizedRegions:(id)a0 detectedRegion:(id)a1;

@end
