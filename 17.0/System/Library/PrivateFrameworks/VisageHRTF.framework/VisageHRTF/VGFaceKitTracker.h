@interface VGFaceKitTracker : NSObject {
    struct CVAFaceTracking { } *_faceKit;
    struct __CFDictionary { } *_semantics;
    struct __CFDictionary { } *_quadSemantics;
}

- (id)init;
- (void)dealloc;
- (struct __CFDictionary { } *)semantics;
- (struct __CFDictionary { } *)buildInputDictionaryWithCaptureData:(id)a0;
- (BOOL)loadFaceKitSemantics;
- (BOOL)loadQuadFaceKitSemantics;
- (BOOL)processWithCaptureData:(id)a0 callback:(id /* block */)a1;
- (struct __CFDictionary { } *)quadSemantics;

@end
