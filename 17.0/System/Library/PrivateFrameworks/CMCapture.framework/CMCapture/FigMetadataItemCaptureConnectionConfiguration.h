@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (retain, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (retain, nonatomic) struct OpaqueCMClock { } *clock;
@property (nonatomic) int sourceSubType;

- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
