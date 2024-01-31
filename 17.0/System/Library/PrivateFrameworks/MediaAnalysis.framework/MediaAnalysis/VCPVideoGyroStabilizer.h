@class NSArray, NSMutableDictionary;

@interface VCPVideoGyroStabilizer : VCPVideoStabilizer {
    NSMutableDictionary *_analysisDict;
    NSArray *_metadata;
    struct CGSize { double width; double height; } _cropSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    NSArray *_stillImageMetadata;
}

- (void).cxx_destruct;
- (int)convertAnalysisResult;
- (id)initWithMetadata:(id)a0 sourceSize:(struct CGSize { double x0; double x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stillImageMetadata:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void)storeAnalytics:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isLivePhoto:(BOOL)a1;

@end
