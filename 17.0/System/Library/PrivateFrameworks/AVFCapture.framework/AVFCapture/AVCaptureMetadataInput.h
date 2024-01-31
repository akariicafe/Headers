@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}

+ (void)initialize;
+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

- (id)init;
- (void)dealloc;
- (id)ports;
- (struct OpaqueCMClock { } *)clock;
- (id)sourceID;
- (BOOL)appendTimedMetadataGroup:(id)a0 error:(id *)a1;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

@end
