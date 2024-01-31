@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying> {
    AVSampleCursorInternal *_sampleCursor;
}

+ (void)initialize;
+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })presentationTimeStamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })decodeTimeStamp;
- (long long)stepInPresentationOrderByCount:(long long)a0;
- (struct OpaqueFigSampleCursor { } *)_figSampleCursor;
- (BOOL)canProvideSampleBuffers;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)a0;
- (struct opaqueCMFormatDescription { } *)copyCurrentSampleFormatDescription;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForCurrentSampleReturningError:(id *)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromCurrentSampleToEndCursor:(id)a0 error:(id *)a1;
- (struct { long long x0; BOOL x1; BOOL x2; BOOL x3; })currentChunkInfo;
- (struct { long long x0; long long x1; })currentChunkStorageRange;
- (id)currentChunkStorageURL;
- (struct { BOOL x0; long long x1; })currentSampleAudioDependencyInfo;
- (id)currentSampleDependencyAttachments;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })currentSampleDependencyInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentSampleDuration;
- (long long)currentSampleIndexInChunk;
- (struct { long long x0; long long x1; })currentSampleStorageRange;
- (struct { BOOL x0; BOOL x1; BOOL x2; })currentSampleSyncInfo;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;
- (long long)samplesRequiredForDecoderRefresh;
- (BOOL)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)a0;
- (BOOL)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)a0;
- (id)seamIdentifier;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (long long)stepInDecodeOrderByCount:(long long)a0;

@end
