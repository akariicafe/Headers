@class NSArray, NSMutableArray;

@interface IPFeatureTextMessageScanner : IPFeatureScanner

@property (retain) NSMutableArray *detectedEventsInContext;
@property BOOL followProposal;
@property (retain, nonatomic) NSMutableArray *dataFeaturesExtractedInContextAndMain;
@property (retain) NSArray *contextMessageUnits;

- (void).cxx_destruct;
- (void)scanEventsInMessageUnits:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)sentenceFeaturesForMessageUnit:(id)a0;
- (id)commonComponentsForConfidence;
- (double)confidenceForEvent:(id)a0 baseConfidence:(double)a1;
- (void)confidenceForEvents:(id)a0;
- (id)dataDetectorsFeaturesForMessageUnit:(id)a0 context:(id)a1;
- (void)doSynchronousScanWithCompletionHandler:(id /* block */)a0;
- (id)eventSpecificComponentsForConfidence:(id)a0;
- (double)experimentalConfidenceForEvent:(id)a0 experimentalBaseConfidence:(double)a1;
- (void)experimentalConfidenceForEvents:(id)a0;
- (id)keywordFeaturesForMessageUnit:(id)a0;
- (unsigned long long)mainSentencePolarityFrom:(id)a0;
- (unsigned long long)mainSentencePolarityFromMessageUnit:(id)a0 index:(unsigned long long)a1;
- (id)processScanOfMainMessageUnit:(id)a0 contextMessageUnits:(id)a1;
- (void)resetScanState;
- (void)scanEventsInMessageUnits:(id)a0 contextMessageUnits:(id)a1 synchronously:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
