@class CRFormAnalyzerConfiguration;

@interface CRFormContourBasedDetector : NSObject

@property (readonly) CRFormAnalyzerConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)detectFormFieldsInImage:(id)a0;

@end
