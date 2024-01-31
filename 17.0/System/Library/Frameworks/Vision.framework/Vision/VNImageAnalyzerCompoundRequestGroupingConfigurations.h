@class NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject {
    NSMutableDictionary *_groupingConfigurations;
    unsigned long long _detectorModel;
}

- (unsigned long long)detectorModel;
- (void).cxx_destruct;
- (id)initWithDetectorModel:(unsigned long long)a0;

@end
