@interface SNAudioFileUtils : NSObject

+ (id /* block */)factoryProducingBuffersWithFormat:(id)a0 frameCapacity:(unsigned int)a1 recycleBuffers:(BOOL)a2;
+ (unsigned int)readFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 bufferFactory:(id /* block */)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (long long)audioFileFrameCount:(id)a0;
+ (id /* block */)bufferPopulatorReadingFromAudioFile:(id)a0;
+ (id /* block */)errorBufferPopulator;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })findFileFrameReachableWithProcessingRateInAudioFile:(id)a0 nearestToProcessingFrame:(long long)a1 roundingMethod:(unsigned int)a2 error:(id *)a3;
+ (BOOL)fullyProcessFrameCount:(unsigned int)a0 bufferFactory:(id /* block */)a1 populator:(id /* block */)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (BOOL)fullyReadFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 bufferFactory:(id /* block */)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (BOOL)fullyReadFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 fromProcessingFramePosition:(long long)a2 assumingCurrentProcessingFramePosition:(long long)a3 bufferFactory:(id /* block */)a4 handler:(id /* block */)a5 error:(id *)a6;
+ (BOOL)fullyReadFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 handler:(id /* block */)a4 error:(id *)a5;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getTimeRangeEncompassingEntireAudioFile:(id)a0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getTimeRangeEncompassingEntireAudioFile:(id)a0 atSampleRate:(double)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getTimeRangeEncompassingEntireAudioFileAtURL:(id)a0 error:(id *)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })getTimeWhichIsIntegralNumberOfSamplesInRate:(long long)a0 andRate:(long long)a1;
+ (id /* block */)ignoredBufferHandler;
+ (id)openFileForReadingAtURL:(id)a0 format:(id)a1 error:(id *)a2;
+ (id)openFileForRecordingAtURL:(id)a0 format:(id)a1 error:(id *)a2;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })primingRangeToSetProcessingFramePosition:(unsigned int)a0 inAudioFile:(id)a1 error:(id *)a2;
+ (unsigned int)processFrameCount:(unsigned int)a0 bufferFactory:(id /* block */)a1 populator:(id /* block */)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (unsigned int)readFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 framProcessingFramePosition:(long long)a2 assumingCurrentProcessingFramePosition:(long long)a3 bufferFactory:(id /* block */)a4 handler:(id /* block */)a5 error:(id *)a6;
+ (unsigned int)readFramesFromAudioFile:(id)a0 frameCount:(unsigned int)a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 handler:(id /* block */)a4 error:(id *)a5;
+ (BOOL)readTimeRangeFromAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 assumingCurrentProcessingFramePosition:(long long)a2 bufferFactory:(id /* block */)a3 prefixBufferPopulator:(id /* block */)a4 suffixBufferPopulator:(id /* block */)a5 handler:(id /* block */)a6 error:(id *)a7;
+ (BOOL)readTimeRangeFromAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 assumingCurrentProcessingFramePosition:(long long)a2 maxFramesPerBuffer:(unsigned int)a3 recycleBuffers:(BOOL)a4 prefixBufferPopulator:(id /* block */)a5 suffixBufferPopulator:(id /* block */)a6 handler:(id /* block */)a7 error:(id *)a8;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })readTimeRangeFromLoopedAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 assumingCurrentProcessingFramePosition:(long long)a2 maxFramesPerBuffer:(unsigned int)a3 recycleBuffers:(BOOL)a4 handler:(id /* block */)a5 error:(id *)a6;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })readTimeRangeFromLoopedAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 assumingCurrentProcessingframePoition:(long long)a2 bufferFactory:(id /* block */)a3 handler:(id /* block */)a4 error:(id *)a5;
+ (BOOL)setProcessingFramePositionInAudiofile:(id)a0 framePosition:(long long)a1 bufferFactory:(id /* block */)a2 error:(id *)a3;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })timeInAudioFile:(id)a0 ofProcessingFrame:(unsigned int)a1;
+ (BOOL)validateAllFramesProcessedFromRemainingCount:(unsigned int)a0 error:(id *)a1;
+ (id)viewOfAudioFile:(id)a0 withAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 error:(id *)a2;
+ (id)viewOfAudioFile:(id)a0 withFormat:(id)a1 error:(id *)a2;
+ (id)viewOfAudioFile:(id)a0 withSampleRate:(double)a1 error:(id *)a2;
+ (id /* block */)zeroBufferPopulator;

- (id)init;

@end
