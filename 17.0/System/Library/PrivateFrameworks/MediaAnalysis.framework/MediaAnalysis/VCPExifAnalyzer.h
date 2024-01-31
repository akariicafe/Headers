@class NSDictionary, NSMutableDictionary;

@interface VCPExifAnalyzer : NSObject {
    NSDictionary *_properties;
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_results;
}

- (void).cxx_destruct;
- (int)addFaceResults:(id)a0 flags:(unsigned long long *)a1;
- (int)analyzeAsset:(unsigned long long *)a0 results:(id *)a1;
- (id)initWithProperties:(id)a0 forAnalysisTypes:(unsigned long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformUprightAboutTopLeft:(unsigned int)a0;

@end
