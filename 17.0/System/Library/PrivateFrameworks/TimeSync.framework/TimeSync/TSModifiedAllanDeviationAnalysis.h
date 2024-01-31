@class NSArray;

@interface TSModifiedAllanDeviationAnalysis : TSTimeErrorAnalysis {
    double *_madev;
}

@property (readonly, copy, nonatomic) NSArray *madev;

+ (id)variableName;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;

- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)analysisLimit;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)initWithTimeErrorValues:(id)a0;
- (id)madev;
- (id)madevFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)threadingLimit;
- (long long)threadingSegment;

@end
