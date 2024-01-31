@class NSMutableDictionary;

@interface VCImageConverterBase : NSObject {
    struct __CVPixelBufferPool { } *_bufferPool;
    unsigned int _formatType;
    unsigned long long _outputWidth;
    unsigned long long _outputHeight;
    NSMutableDictionary *_bufferPoolDictionary;
}

- (void)dealloc;
- (BOOL)ensureBufferPoolSupportsOutputWidth:(unsigned long long)a0 outputHeight:(unsigned long long)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (BOOL)setUpBufferPoolForOutputWidth:(unsigned long long)a0 outputHeight:(unsigned long long)a1;

@end
