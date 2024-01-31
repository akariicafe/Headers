@class NSOperation, NSArray;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
    void *_figAssetWriterCallbackContextToken;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation;

- (BOOL)_isDefunct;
- (void)dealloc;
- (void)_finishWritingOperationsDidFinish;
- (long long)status;
- (id)initWithConfigurationState:(id)a0 finishWritingOperations:(id)a1 figAssetWriterCallbackContextToken:(void *)a2 figAssetWriter:(struct OpaqueFigAssetWriter { } *)a3;
- (void)cancelWriting;

@end
