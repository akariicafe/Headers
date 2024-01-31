@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (BOOL)_isDefunct;
- (void)dealloc;
- (void)flush;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (void)finishWriting;
- (id)initWithConfigurationState:(id)a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (id)error;
- (void)flushSegment;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)setFinishWritingDelegate:(id)a0;

@end
