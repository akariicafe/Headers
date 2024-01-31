@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
    NSMutableArray *_pendingAudioSampleBuffers;
}

- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(BOOL)a5 error:(id *)a6;
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)a0;
- (void)prepareToEndSession;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)a0 sourcePixelBufferAttributes:(id)a1 multiPass:(BOOL)a2 error:(id *)a3;
- (BOOL)markEndOfDataReturningError:(id *)a0;

@end
