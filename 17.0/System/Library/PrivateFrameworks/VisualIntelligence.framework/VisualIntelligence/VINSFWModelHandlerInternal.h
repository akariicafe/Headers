@class SCMLHandler;

@interface VINSFWModelHandlerInternal : NSObject {
    SCMLHandler *_scmlHandler;
}

+ (BOOL)isSensitiveLabelScore:(id)a0 confidenceScore:(double)a1 classificationMode:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithPreferredMetalDevice:(id)a0;

@end
