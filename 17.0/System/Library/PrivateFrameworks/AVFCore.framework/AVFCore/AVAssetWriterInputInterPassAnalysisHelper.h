@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)stopRequestingMediaData;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (id)currentPassDescription;
- (void)markAsFinished;
- (void)dealloc;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)status;
- (void)markCurrentPassAsFinished;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)canPerformMultiplePasses;
- (id)initWithConfigurationState:(id)a0;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)initWithWritingHelper:(id)a0;
- (BOOL)shouldRespondToInitialPassDescription;
- (void)startPassAnalysis;

@end
