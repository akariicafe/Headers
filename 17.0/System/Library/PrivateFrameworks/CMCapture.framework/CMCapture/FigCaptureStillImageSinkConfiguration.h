@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL quadraHighResCaptureEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;

- (id)description;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
