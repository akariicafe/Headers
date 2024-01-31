@class VCVideoHardwareDumpWriter;

@interface VCVideoHardwareDumpCollector : NSObject {
    struct __CFDictionary { } *_txFrameData;
    struct __CFDictionary { } *_rxFrameData;
    struct __CFDictionary { } *_captureFrameData;
    struct __CFArray { } *_txDumpHeaders;
    struct __CFArray { } *_rxDumpHeaders;
    struct __CFArray { } *_captureDumpHeaders;
    VCVideoHardwareDumpWriter *_writer;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;

@end
