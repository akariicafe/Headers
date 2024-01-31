@class NSMutableArray;

@interface VCPStillImageMetaAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (id)initWithRequestAnalyses:(unsigned long long)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (id)privateResults;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;

@end
