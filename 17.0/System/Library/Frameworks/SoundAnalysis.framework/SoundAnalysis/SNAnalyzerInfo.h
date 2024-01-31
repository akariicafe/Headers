@class NSError, SNAnalyzerHost;
@protocol SNAnalyzerCreating, SNProcessing;

@interface SNAnalyzerInfo : NSObject {
    BOOL _configured;
    id<SNAnalyzerCreating> _request;
    id /* block */ _resultsHandler;
    id /* block */ _completionHandler;
    SNAnalyzerHost *_analyzerHost;
    id<SNProcessing> _sharedProcessor;
    NSError *_configurationError;
}

- (void).cxx_destruct;

@end
