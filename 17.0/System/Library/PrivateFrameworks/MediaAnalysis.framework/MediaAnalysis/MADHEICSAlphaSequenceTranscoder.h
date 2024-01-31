@class NSData, NSArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MADHEICSAlphaSequenceTranscoder : NSObject {
    NSData *_sequenceData;
    unsigned long long _maxDimension;
    double _qualityValue;
    struct CF<CMPhotoDecompressionSession *> { struct CMPhotoDecompressionSession *value_; } _source;
    struct CF<CMPhotoDecompressionContainer *> { struct CMPhotoDecompressionContainer *value_; } _sourceContainer;
    struct CF<CMPhotoDecompressionContainer *> { struct CMPhotoDecompressionContainer *value_; } _sequenceContainer;
    long long _frameCount;
    struct CF<CMPhotoCompressionSession *> { struct CMPhotoCompressionSession *value_; } _compressionSession;
    long long _sequenceIndex;
    NSArray *_frameProperties;
    NSObject<OS_dispatch_group> *_encodeGroup;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    NSObject<OS_dispatch_semaphore> *_encodeSemaphore;
}

- (id)run;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_setupTranscode;
- (int)_addFrameToSequence:(long long)a0 basePixelBuffer:(struct __CVBuffer { } *)a1 alphaPixelBuffer:(struct __CVBuffer { } *)a2 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)_decodeFrameIndex:(unsigned long long)a0 basePixelBuffer:(struct __CVBuffer **)a1 alphaPixelBuffer:(struct __CVBuffer **)a2 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3;
- (int)_transcode;
- (id)initWithSequenceData:(id)a0 maxDimension:(unsigned long long)a1 qualityValue:(double)a2;

@end
