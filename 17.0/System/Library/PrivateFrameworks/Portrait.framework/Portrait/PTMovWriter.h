@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, NSURL, AVAssetWriter;

@interface PTMovWriter : NSObject {
    AVAssetWriterInput *_writerInput;
    AVAssetWriter *_writer;
    AVAssetWriterInputPixelBufferAdaptor *_pbAdaptor;
    int _frameNo;
    float _framesPerSecond;
}

@property (nonatomic) NSURL *fileURL;

- (void)finalize;
- (void).cxx_destruct;
- (void)addFrame:(struct __CVBuffer { } *)a0;
- (void)addFrame:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithURL:(id)a0 settings:(id)a1;

@end
