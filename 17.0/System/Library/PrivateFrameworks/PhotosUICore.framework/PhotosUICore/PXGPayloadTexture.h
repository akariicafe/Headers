@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture {
    unsigned char _presentationType;
}

@property (readonly, copy, nonatomic) id<NSCopying> payload;
@property (readonly, nonatomic) unsigned char presentationType;

- (long long)estimatedByteSize;
- (struct CGImage { } *)imageRepresentation;
- (BOOL)isOpaque;
- (id)init;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 presentationType:(unsigned char)a1;

@end
