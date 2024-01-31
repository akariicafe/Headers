@interface NUImageExportFormatHEIF : NUImageExportFormat

@property (nonatomic) long long bitDepth;

- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsHDR;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (id)initWithBitDepth:(long long)a0;

@end
