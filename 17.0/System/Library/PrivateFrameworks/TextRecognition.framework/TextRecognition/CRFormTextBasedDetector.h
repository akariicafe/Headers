@class CRFormAnalyzerConfiguration;

@interface CRFormTextBasedDetector : NSObject

@property (readonly) CRFormAnalyzerConfiguration *configuration;

+ (BOOL)_isTextRegion:(id)a0 aboveField:(id)a1 withTolerance:(double)a2;
+ (BOOL)_isTextRegion:(id)a0 onLeftOfField:(id)a1 withTolerance:(double)a2;
+ (id)bestFieldCandidate:(id)a0 secondCandidate:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)detectFormFieldsInImage:(id)a0 document:(id)a1 candidateFields:(id)a2;

@end
