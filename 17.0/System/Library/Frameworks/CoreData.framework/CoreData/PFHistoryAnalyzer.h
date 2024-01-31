@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;

@end
